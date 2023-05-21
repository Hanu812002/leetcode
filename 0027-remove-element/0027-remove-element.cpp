class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=0;
        int k=0;
        while(i<nums.size()){
            
            if(nums[i]!=val){
                swap(nums[i],nums[j]);
                j++;
            }
               i++;            
        }
        
        return j;
    }
};