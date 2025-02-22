class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int expected_sum = n*(n+1)/2; 
       int actual_sum =0;
       for(const auto& num:nums)
       {
        actual_sum += num;
         
       }

       return expected_sum - actual_sum;
       
    }
};