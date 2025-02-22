class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len = 0;
        for(int start=0,end=0,zeros=0; end<(int)nums.size(); ++end)
        {
            zeros += (nums[end]==0);
            
            while(zeros>k)
            {
                zeros -= (nums[start]==0);
                start = start + 1;
            }
            len = max(len,end-start+1);


        }

        return len;
    }
};