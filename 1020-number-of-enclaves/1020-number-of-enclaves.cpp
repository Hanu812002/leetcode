class Solution {
public:
    void visit0(vector<vector<int>>& grid, int n, int m, int i, int j){
        if(i >= n || i < 0 || j >= m || j < 0 ) return;
       
        if(grid[i][j] == 0) return;
       
        grid[i][j]=0;
       
        
        visit0(grid, n, m, i-1, j);
        // visit(grid, n, m, i-1, j+1, visited);
        visit0(grid, n, m, i, j-1);
        visit0(grid, n, m, i, j+1);
        // visit(grid, n, m, i+1, j-1, visited);
        visit0(grid, n, m, i+1, j);
        // visit(grid, n, m, i+1, j+1, visited);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || j==0 || i==n-1 || j==m-1) && grid[i][j]==1)
                    visit0(grid,n,m,i,j);
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    ans++;
            }
        }
        
        return ans;
    }
};