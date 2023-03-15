class Solution {
public:
    int fun(vector<int>&prices,int i,int buy,vector<vector<int>>&dp){
        if(i>=prices.size())
            return 0;
            
            
    if(dp[i][buy]!=-1)
        return dp[i][buy];
        
    int l=0;
     if(buy==0){
         l=max(-prices[i]+fun(prices,i+1,1,dp),fun(prices,i+1,0,dp));
     }
      else{
            l=max(prices[i]+fun(prices,i+2,0,dp),fun(prices,i+1,1,dp));
      }
      return dp[i][buy]=l;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
     vector<vector<int>> dp(n,vector<int>(2,-1));
         return fun(prices,0,0,dp);
//         for(int i=0;i<n;i++)
//             cout<<dp[i]<<" ";
        
       
    }
};