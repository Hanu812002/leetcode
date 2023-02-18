class Solution {
public:
     int dp[101][101]{};
    int uniquePaths(int m, int n, int i, int j , vector<vector<int>>& o) {
        if(i >= m || j >= n || o[i][j]==1) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j] = uniquePaths(m, n, i+1, j,o) + uniquePaths(m, n, i, j+1,o);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        return uniquePaths(m,n,0,0,obstacleGrid);
    }
};