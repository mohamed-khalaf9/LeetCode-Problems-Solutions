class Solution {
public:
     int max_sum_subarray(vector<int>& nums)
    {
        int max_sum=INT_MIN;
        int min_prefix=0;
        int prefix=0;
        for(auto&num:nums)
        {
            prefix+=num;
            max_sum = max(max_sum,prefix-min_prefix);
            min_prefix= min(min_prefix,prefix);
        }
        return max_sum;
    }
    int min_sum_subarray(vector<int>& nums)
    {
        int min_sum=INT_MAX;
        int max_prefix=0;
        int prefix=0;
        for(auto&num:nums)
        {
            prefix+=num;
            min_sum = min(min_sum,prefix-max_prefix);
            max_prefix= max(max_prefix,prefix);
        }
        return min_sum;
    }
    int sum(vector<int>& nums)
    {
        int sum=0;
        for(const auto& num:nums)
        sum+=num;

        return sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int mx = max_sum_subarray(nums);
        int mn = min_sum_subarray(nums);
        int sm = sum(nums);

        if(sm==mn)
        return mx;

        return max(mx,(sm-mn));

        
    }
};