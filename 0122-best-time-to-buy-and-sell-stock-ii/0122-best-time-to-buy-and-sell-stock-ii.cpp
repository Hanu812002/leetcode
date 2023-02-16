class Solution {
public:
    int fun(vector<int>&p,int i,int buy,vector<vector<int>> &dp){
        
        if(i==p.size())
            return 0;
        
        if(dp[i][buy] != -1){
            return dp[i][buy];
        }
        int ans1=0;
        if(buy==0){
            ans1=max(fun(p,i+1,0,dp),-p[i]+fun(p,i+1,1,dp));
        }
        
        if(buy==1){
            ans1=max(fun(p,i+1,1,dp),p[i]+fun(p,i+1,0,dp));
        }
        
      return  dp[i][buy] = ans1;
        
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return fun(prices,0,0,dp);
        
        
    }
};