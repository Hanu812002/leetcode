class Solution {
public:
    int fun(int m,int n,vector<vector<int>>&dp){
     
        if(m<0 || n<0)
            return 0;
        
        if(m==0 && n==0)
            return 1;
        
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        return dp[m][n]= fun(m-1,n,dp)+fun(m,n-1,dp);   
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,dp);
    }
};