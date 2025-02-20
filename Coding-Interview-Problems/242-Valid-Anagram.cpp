class Solution {
public:
    bool isAnagram(string s, string t) {
       int s_len = s.size();
       int t_len = t.size();
       if(s_len != t_len) return false;

       unordered_map<char,int> mp;
      
       for(int c=0;c<s_len;c++)
       {
        mp[s[c]]++;
        mp[t[c]]--;

       }
       for(const auto& p : mp)
       {
        
        if(p.second != 0)
        return false;
       }

       return true;
        
    }
};