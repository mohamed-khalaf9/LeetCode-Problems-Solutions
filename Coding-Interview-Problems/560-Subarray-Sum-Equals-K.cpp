class Solution {
public:

    
    
    
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> pre_frq;
        pre_frq[0]=1;

        int res=0;
        int prefix_sum=0;
        for(const auto& num:nums)
        {
            prefix_sum += num;
            if(pre_frq.count(prefix_sum-k))
            res += pre_frq[prefix_sum-k];

            pre_frq[prefix_sum]++;
        }

        

        return res;
        
    }
};