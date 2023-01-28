class Solution {
public:
int fun(vector<int>&p,int i,int buy,int n,vector<vector<int>>&dp){
    if(i>=n)
    return 0;

    if(dp[i][buy]!=-1)
     return dp[i][buy];

     int ans;
    if(buy==0){
        ans=max(fun(p,i+1,0,n,dp),(-p[i]+fun(p,i+1,1,n,dp)));
    }
    if(buy==1){
        ans=max(fun(p,i+1,1,n,dp),(p[i]+fun(p,i+2,0,n,dp)));
    }
    return dp[i][buy]=ans;
}
    int maxProfit(vector<int>& p) {
         int n = p.size();
    vector<vector<int>> dp(n,vector<int>(2,-1));
    
    int ans = fun(p,0,0,n,dp);
    return ans;
    }
};