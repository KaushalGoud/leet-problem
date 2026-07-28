class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x=0;
        if(nums.size()==1)return ;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                int temp=nums[x];
                nums[x]=nums[i];
                nums[i]=temp;
                x=x+1;

            }
        }
    }
};