class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_len = s.size();
        int t_len = t.size();
        if(s_len == t_len)
        return s == t;
        if(s_len > t_len) return false;

        int expected_next_idx=0; 
        int cnt =0;
        for(int i=0;i<t_len && expected_next_idx< s_len ; ++i)
        {
            if(t[i]==s[expected_next_idx])
            {
                ++cnt;
                ++expected_next_idx;
            }
        }

        return s_len == cnt;
        
    }
};