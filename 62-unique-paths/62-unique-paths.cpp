class Solution {
public:
    
         int solve(int i, int j, vector<vector<int>> &dp, int& m, int& n) {
        if(i == m-1 || j == n-1) return 1;
        if(dp[i][j] != 0)return dp[i][j];
        
        dp[i][j] = solve(i+1, j, dp, m, n) + solve(i, j+1, dp, m, n);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m , vector<int>(n , 0));
        return solve(0, 0, dp, m, n);
    }
    //  int i,j,k,l,m,n;
    //     int dp[r+1][c+1]; // dp array, dp[i][j] stores number of ways to reach the pint (i,j) in 0 based indexing.
    //     for(i=0;i<r;i++)
    //     {
    //         for(j=0;j<c;j++)
    //         {
    //             if(i==0 or j==0)dp[i][j]=1; //since we can move either right or down only 
    //             else dp[i][j]=dp[i][j-1]+dp[i-1][j]; // we can reach a position from up and left of that point, thus add them
    //         }
    //     }
    //     return dp[r-1][c-1];
    // }
    
};