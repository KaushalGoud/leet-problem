class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x = 0;
        vector<int> out;
        for (int i = 0; i < nums.size(); i++) {
            for (int x = 0; x < nums.size(); x++) {
                if(i==x) continue;
                if (nums[i] + nums[x] == target) {
                    out.push_back(i);
                    out.push_back(x);
                    return out;
                }
               
            }
           
    }
        return out;
    }
};