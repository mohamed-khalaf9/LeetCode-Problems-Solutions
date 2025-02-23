class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int max_len=0;

        for(int start=0,end=0; end<(int)s.size(); ++end)
        {
            if(!window.count(s[end]))
            {
                window.insert(s[end]);
                max_len = max(max_len,end-start+1);
            }
            else{
                while(window.count(s[end]))
                {
                    window.erase(s[start]);
                    start = start+1;
                }
                window.insert(s[end]);
            }
            
        }

        return max_len;
    }
};