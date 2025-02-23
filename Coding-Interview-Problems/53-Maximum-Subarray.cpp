class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int max_sum=INT_MIN;
      int min_prefix=0;
      int prefix_sum=0;

      for(const auto& num:nums)
      {
        prefix_sum += num;
        max_sum = max(max_sum,prefix_sum - min_prefix);
        min_prefix= min(min_prefix,prefix_sum);
      }

      return max_sum;
      
    }
};