class Solution {
public:
    int search(vector<int>& nums, int target) {
          
        int h=nums.size()-1;
        int l=0;
        
        while(l<=h){
            
            int m=l+(h-l)/2;
            
            if(nums[m]==target)
                return m;
            
            else if(nums[m]>=nums[l]){
                if(nums[l]<=target && nums[m]>target)
                    h=m-1;
                else
                    l=m+1;
            }
            
            else{
                
                if(nums[h]>=target && nums[m]<target)
                    l=m+1;
                else
                    h=m-1;
                    
            }
            
        }
              
        return -1;
    }
};