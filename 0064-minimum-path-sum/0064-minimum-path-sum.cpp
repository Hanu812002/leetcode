class Solution {
public:
    int ans=INT_MAX;
    int min_path(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& dp){
        if(i>=grid.size() || j>=grid[0].size())
            return INT_MAX;
        
        if(i==grid.size()-1 && j==grid[0].size()-1)
        {
            return grid[i][j];
        }
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
         int a=grid[i][j]+min(min_path(grid,i+1,j,dp),min_path(grid,i,j+1,dp));
        
        // cout<<a<<" "<<i<<"  "<<j<<endl;
        
        return dp[i][j]=a;
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return min_path(grid,0,0,dp);
        // return ans;
    }
};