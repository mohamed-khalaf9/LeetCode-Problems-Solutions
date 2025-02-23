class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0];
        for(int start=0,end=0,sum=0; end<(int)nums.size(); ++end)
        {
            sum += nums[end];
            max_sum = max(max_sum,sum);

            while(sum<0)
            {
                sum -= nums[start];
                ++start;
            }
        }

        return max_sum;
        
    }
};