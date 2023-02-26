class Solution {
public:
        int dp[105];
    int fun(vector<int>nums,int i,int j){
        if(i>j)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(fun(nums,i+1,j),nums[i]+fun(nums,i+2,j));
    }
    int rob(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
        memset(dp, -1, sizeof(dp));
        int a=fun(nums,1,nums.size()-1);
        
        memset(dp, -1, sizeof(dp));
         int b=fun(nums,0,nums.size()-2);
        
        return max(a,b);
    }
};