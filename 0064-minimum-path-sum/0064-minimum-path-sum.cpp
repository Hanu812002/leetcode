

class Solution {
public:
    int fun(int m,int n,vector<vector<int>>&dp,vector<vector<int>>&o){
     
    
        if(m<0 || n<0)
            return INT_MAX;
        
        if(m==0 && n==0)
            return o[0][0];
        
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        int a=fun(m-1,n,dp,o);
        int b=fun(m,n-1,dp,o);
  
        
        return dp[m][n]=o[m][n]+ min(a,b);   
    }
   int minPathSum(vector<vector<int>>& o) {
       int m=o.size();
       int n=o[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,dp,o);
    }
};