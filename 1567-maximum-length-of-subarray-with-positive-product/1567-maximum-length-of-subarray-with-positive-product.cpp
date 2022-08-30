class Solution {
public:
    int getMaxLen(vector<int>& nums) {
         int ans=0;
        int start=-1,first_neg=-1,n=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                first_neg=i,start=i,n=0;
                continue;
            }
            if(nums[i]<0)
                n++;
            if(n==1 && nums[i]<0)
                first_neg=i;
            if(n%2==0)
                ans=max(ans,i-start);
            else
                ans=max(ans,i-first_neg);
        }
        return ans;
    }
};