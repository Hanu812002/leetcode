class Solution {
public:
    int jump(vector<int>& nums) {
         int maxr=nums[0];
        int jump=nums[0];
        if(nums.size()==1)
            return 0;
        
        if(maxr==0)
            return -1;
        int c=1;
        for(int i=1;i<nums.size();i++){
            if(i==nums.size()-1)
                return c;
            
            maxr=max(maxr,nums[i]+i);
            jump--;
            if(jump==0){
                c++;
                if(maxr<=i)
                    return -1;
                jump=maxr-i;
            }
        }
        return 0;
    }
};