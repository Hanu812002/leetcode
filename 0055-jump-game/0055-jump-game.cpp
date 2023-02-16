class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxr=nums[0];
        int jump=nums[0];
        if(nums.size()==1)
            return true;
        
        if(maxr==0)
            return false;
        
        for(int i=1;i<nums.size();i++){
            if(i==nums.size()-1)
                return true;
            
            maxr=max(maxr,nums[i]+i);
            jump--;
            if(jump==0){
                if(maxr<=i)
                    return false;
                jump=maxr-i;
            }
        }
        return true;
    }
};