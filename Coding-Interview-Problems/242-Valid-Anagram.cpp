class Solution {
public:
    bool isAnagram(string s, string t) {
       int s_len = s.size();
       int t_len = t.size();
       if(s_len != t_len) return false;

       unordered_map<char,int> mp1;
       unordered_map<char,int> mp2;
       for(int c=0;c<s_len;c++)
       {
        if(mp1.count(s[c]))
        {
            mp1[s[c]]++;
        }
        else
        mp1.insert({s[c],1});

        if(mp2.count(t[c]))
        {
            mp2[t[c]]++;
        }
        else
        mp2.insert({t[c],1});

       }
       for(const auto& p : mp1)
       {
        auto it = mp2.find(p.first);
        if(it==mp2.end() || it->second != p.second)
        return false;
       }

       return true;
        
    }
};