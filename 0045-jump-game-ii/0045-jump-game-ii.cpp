class Solution {
public:
    int jump(vector<int>& nums) {
        
        if(nums.size()==1)
            return 0;
        int step=1;
        int maxr=nums[0];
        int mj=nums[0];
        for(int i=1;i<nums.size();i++){
            if(i==nums.size()-1)
                return step;
            maxr=max(maxr,nums[i]+i);
            mj--;
            if(mj==0){
                mj=maxr-i;
                step++;
            }
        }
        return step;
    }
};