class Solution {
public:
    int solve(int index,vector<int>&cost,int n,vector<int>&dp){
    if(index>=n) return 0;
    if(dp[index]!=-1) return dp[index];
    int onestep=solve(index+1,cost,n,dp)+cost[index];
    int twostep=solve(index+2,cost,n,dp)+cost[index];
    return dp[index]=min(onestep,twostep);
}
int minCostClimbingStairs(vector<int>& cost) {
    
    int n=cost.size();
    vector<int>dp(n+1,-1);
    int res1=solve(0,cost,n,dp);
    int res2=solve(1,cost,n,dp);
    return min(res1,res2);
    }
};