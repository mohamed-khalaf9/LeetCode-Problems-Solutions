class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        while(left<right)
        {
            int cur_sum = numbers[left]+numbers[right];
            if(cur_sum>target)
            right -=1;
            if(cur_sum<target)
            left +=1;
            if(cur_sum==target)
            return {left+1,right+1};
        }
        return {};

        
    }
};