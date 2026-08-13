class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maxSum = INT_MIN;
        vector<int>vp;
        if (nums.size() == 1)
            return nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if(currentSum+nums[i]>nums[i]){
                currentSum+=nums[i];
                vp.push_back(nums[i]);
            }
            else{
                currentSum=nums[i];
                vp.clear();
                vp.push_back(nums[i]);

            }
            if (maxSum < currentSum) {

                maxSum = currentSum;
            }
        }
        return maxSum;
    }
};