class Solution {
public:
    int jump(vector<int>& nums) {
         int maxr=nums[0];
        int jump=nums[0];
        int steps=1;
        
        if(nums.size()==1)
            return 0;
        
        for(int i=1;i<nums.size();i++){
            if(i==nums.size()-1)
                return steps;
            
            maxr=max(maxr,nums[i]+i);
            jump--;
            if(jump==0){
                // if(maxr<=i)
                //     return false;
                jump=maxr-i;
                steps++;
            }
        }
        return steps;
    }
}; 
  