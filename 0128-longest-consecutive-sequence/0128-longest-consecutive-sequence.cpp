class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int lastSmall = nums[0];
        int longest = 1;
        int count = 1;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == lastSmall + 1) {
                lastSmall = nums[i];
                count++;
            }
            else if(nums[i] == lastSmall) {
                continue;   // duplicate
            }
            else {
                longest = max(longest, count);
                lastSmall = nums[i];
                count = 1;
            }
        }

        longest = max(longest, count);

        return longest;
    }
};