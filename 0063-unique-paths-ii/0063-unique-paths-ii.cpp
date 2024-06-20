
class Solution {
public:
    int fun(int m,int n,vector<vector<int>>&dp,vector<vector<int>>&o){
     
    
        if(m<0 || n<0 || o[m][n]==1)
            return 0;
        
        if(m==0 && n==0)
            return 1;
        
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        return dp[m][n]= fun(m-1,n,dp,o)+fun(m,n-1,dp,o);   
    }
   int uniquePathsWithObstacles(vector<vector<int>>& o) {
       int m=o.size();
       int n=o[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,dp,o);
    }
};