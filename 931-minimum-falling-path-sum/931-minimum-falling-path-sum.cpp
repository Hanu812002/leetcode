class Solution {
public:
   int f(int i, int j,vector<vector<int>>& matrix,vector<vector<int>>& dp){
        if(i<0|| i>=matrix.size()|| j<0 || j>=matrix.size())
            return 1e6;
        
        if(i==matrix.size()-1)
            return matrix[i][j];
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int rightdia = matrix[i][j]+f(i+1,j+1,matrix,dp);
        int down =  matrix[i][j]+f(i+1,j,matrix,dp);
        int leftdia = matrix[i][j]+f(i+1,j-1,matrix,dp);
        
        return dp[i][j] = min(rightdia,min(down,leftdia));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int mini = INT_MAX;
        for(int j =0;j<n;j++){
            mini = min(mini,f(0,j,matrix,dp));
        }
        return mini;
    }
};