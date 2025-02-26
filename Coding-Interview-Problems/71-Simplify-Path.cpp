class Solution {
public:
    vector<string> tokenize_path(string path) {
        vector<string> tokens;
        string token = \\;
        for (char ch : path) {
            if (ch == '/') { 
                if (!token.empty()) {  
                    tokens.push_back(token);
                    token = \\;
                }
            } else {
                token += ch;
            }
        }
        if (!token.empty()) tokens.push_back(token); 
        return tokens;
    }

    string simplifyPath(string path) {
        vector<string> tokens = tokenize_path(path);
        stack<string> st;
        
        for (const auto& token : tokens) {
            if (token == \.\ || token.empty()) continue; 
            if (token == \..\) {
                if (!st.empty()) st.pop(); 
            } else {
                st.push(token);
            }
        }

        string res = \\;
        while (!st.empty()) {
            res = \/\ + st.top() + res;
            st.pop();
        }

        return res.empty() ? \/\ : res;
    }
};
