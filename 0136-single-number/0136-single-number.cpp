class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        if (nums.size() == 1)
            return nums[0];
        for (int i = 0; i < nums.size(); i++) {
           int counter=0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j])
                    counter++;
            }
            if (counter == 1)
                return nums[i];
        }

        return num;
    }
};