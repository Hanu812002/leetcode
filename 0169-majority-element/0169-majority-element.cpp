class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
        
        int major_index=0;
        int c=1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[major_index]==nums[i])
                c++;
            else
                c--;
            
            if(c==0){
                major_index=i;
                c=1;
            }
            
        }
        
        c=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[major_index])
                c++;
        }
        
        
        // if(c>=n/2)
            return nums[major_index];
        // else
        //     return 
   
    }
};