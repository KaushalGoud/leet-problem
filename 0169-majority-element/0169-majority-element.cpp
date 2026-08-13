class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                elem = nums[i];
                count = 1;
            } else if (elem == nums[i]) {
                count++;

            } else {
                
                count --;
            }
        }
       int sureCount=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==elem)sureCount++;

       }
       if(sureCount>nums.size()/2) 
        return elem;
    return -1;
    }
};