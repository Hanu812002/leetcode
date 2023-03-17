class Solution {
public:
    int solve(vector<int>& coins,int idx,int amount,vector<vector<int>>& dp){
    if(idx==coins.size()||amount==0){
        if(amount==0)return 0;
        return INT_MAX-1;
    }
    if(dp[idx][amount]!=-1)return dp[idx][amount];
    if(coins[idx]<=amount){
        return dp[idx][amount] = min(1 + solve(coins,idx,amount-coins[idx],dp),solve(coins,idx+1,amount,dp)); 
    }else{
        return dp[idx][amount] = solve(coins,idx+1,amount,dp);
    }
}

public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return solve(coins,0,amount,dp)==INT_MAX-1?-1:solve(coins,0,amount,dp);
    }
};