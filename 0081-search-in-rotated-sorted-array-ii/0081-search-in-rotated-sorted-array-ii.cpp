class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        
        while(i<=j){
            int m=i+(j-i)/2;
            if(nums[m]==target)
                return true;
           
            if (nums[i]==nums[m]  &&  nums[m]==nums[j])
            {
                i++;
                j--;
            }
            
            
           else if(nums[m]>=nums[i]){
            if(target>=nums[i] && nums[m]>=target){
                j=m-1;
            }
                else{
                    i=m+1;
                }
            }
            
            
            else{
                 if(target<=nums[j] && nums[m]<=target){
                i=m+1;
            }
                else{
                    j=m-1;
                }
            }
        }
        return false;
    }
};