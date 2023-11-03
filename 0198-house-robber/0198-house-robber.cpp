class Solution {
public:
    
    int fun(int i,vector<int>&dp,vector<int>&nums){
        
        if(i<0)
         return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        
          int op1=fun(i-1,dp,nums);
            int op2=nums[i]+fun(i-2,dp,nums);
        
        // cout<<i<<" "<<op1<<"  "<<op2<<endl;
        
        return dp[i]=max(op1,op2);
        
    }
    int rob(vector<int>& nums) {
        
        vector<int>dp(nums.size()+1,-1);
        // dp[0]=nums[0];
        return fun(nums.size()-1,dp,nums);
    }
};