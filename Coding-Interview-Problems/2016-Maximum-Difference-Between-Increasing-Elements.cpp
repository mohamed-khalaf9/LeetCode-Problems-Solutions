class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maximum_diff = -1;
        int min_val = nums[0];
        int len = nums.size();
        if(len<2) return -1;
       

        for(int j=1; j<len;++j)
        {
            
            if(nums[j]>min_val)
            {
                int diff = nums[j] - min_val;
                maximum_diff = max(maximum_diff,diff);
            }
            min_val = min(min_val,nums[j]);


        }

        return maximum_diff;

    }
};