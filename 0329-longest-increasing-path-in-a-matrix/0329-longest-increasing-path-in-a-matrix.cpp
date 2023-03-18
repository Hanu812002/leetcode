class Solution {
public:
    bool check(int i,int j,int n,int m){
        return(i>=0 && i<n && j>=0 && j<m);
    }
    
    int fun(vector<vector<int>>&matrix,vector<vector<int>>&dp,int i ,int j,int n,int m){
        if(!check(i,j,n,m))
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int c1 = 0, c2 = 0, c3 = 0, c4 =0;
        
        if(check(i+1, j, n, m) and matrix[i+1][j]>matrix[i][j]){
            c1 = fun(matrix, dp, i+1, j, n, m);
        }
        
        if(check(i-1, j, n, m) and matrix[i-1][j]>matrix[i][j]){
            c2 = fun(matrix, dp, i-1, j, n, m);
        }
        
        if(check(i, j+1, n, m) and matrix[i][j+1]>matrix[i][j]){
            c3 = fun(matrix, dp, i, j+1, n, m);
        }
        
        if(check(i, j-1, n, m) and matrix[i][j-1]>matrix[i][j]){
            c4 = fun(matrix, dp, i, j-1, n, m);
        }
        
        dp[i][j] = 1 + max(c1, max(c2, max(c3, c4)));
        
        return dp[i][j];        
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int n = matrix.size(), m = matrix[0].size();
        int ans = 1;
        vector<vector<int>> dp(n, vector<int> (m, -1));
        
        for(int i = 0; i<n;i++){
            for(int j=0;j<m;j++){
                if(dp[i][j]==-1){
                    ans = max(ans, fun(matrix, dp, i, j, n, m));
                }
            }
        }
        return ans;
        
        
        
    }
};