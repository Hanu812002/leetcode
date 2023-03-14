class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        while(i<nums.size()){
            if(nums[j]==0 && nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
            else if(nums[j]!=0)
                j++;
            
            i++;
        }
    }
};