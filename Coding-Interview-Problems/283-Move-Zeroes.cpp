class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int left =0; // represent where the next non-zero element should be 
      for(int i=0;i<(int)nums.size();i++)
      {
        if(nums[i]!=0)
        {
            swap(nums[left],nums[i]);
            ++left;
        }
      }

        
    }
};