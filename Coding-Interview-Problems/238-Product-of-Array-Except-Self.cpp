class Solution {
public:
    
    vector<int> productExceptSelf(vector<int>& nums) {
        // compute prefix products for each index
        vector<int> prefix_products(nums.size());
        int res =1;
        prefix_products[0]=res;
        for(int i=1; i<(int)nums.size(); ++i)
        {
             res = res * nums[i-1];
             prefix_products[i] = res;


        }
        
        //compute suffix products for each index
        res =1;
        int len = nums.size();
        vector<int> suffix_products(len);
        suffix_products[len-1] = res;
        for(int i=len-2; i>=0; --i)
        {
            res = res * nums[i+1];
            suffix_products[i] = res;
        }

        // multiply prefix and suffix for each index 
        vector<int> answer(nums.size());
        for(int i=0; i<(int)nums.size(); ++i)
        {
            answer[i] = prefix_products[i] * suffix_products[i];
        }

        return answer;

       
       
        
    }
};