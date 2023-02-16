class Solution {
public:
    int dp[105];
    int fun(vector<int>&nums,int i){
        if(i>=nums.size())
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(fun(nums,i+1),nums[i]+fun(nums,i+2));
    }
    int rob(vector<int>& nums) {
                memset(dp, -1, sizeof(dp));
        return fun(nums,0);
    }
};