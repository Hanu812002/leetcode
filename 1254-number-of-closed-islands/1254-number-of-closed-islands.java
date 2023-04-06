class Solution {
    public int closedIsland(int[][] grid) {
      int n = grid.length;
        int m = grid[0].length;
        boolean[][] visited = new boolean[n][m];
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                
                if((i==0 || j==0 || i==n-1 || j==m-1) && grid[i][j]==0){
                // System.out.print(i + " " + j);

                    visit0(grid, n, m, i, j);
                }
                
            }
        }
        
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < m; j++){
                
//                 System.out.print(grid[i][j]);
                
//             }
//             System.out.println();
//         }
        
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                
                if(grid[i][j] == 0 && visited[i][j] == false){
                    count++;
                    visit(grid, n, m, i, j, visited);
                }
            }
        }
        
        
        
        return count;
    }
    void visit(int[][] grid, int n, int m, int i, int j, boolean[][] visited){
        if(i >= n || i < 0 || j >= m || j < 0 ) return;
        if(grid[i][j] == 1 || visited[i][j] == true) return;
        visited[i][j] = true;
        // visit(grid, n, m, i-1, j-1, visited);
        visit(grid, n, m, i-1, j, visited);
        // visit(grid, n, m, i-1, j+1, visited);
        visit(grid, n, m, i, j-1, visited);
        visit(grid, n, m, i, j+1, visited);
        // visit(grid, n, m, i+1, j-1, visited);
        visit(grid, n, m, i+1, j, visited);
        // visit(grid, n, m, i+1, j+1, visited);
    }
   void visit0(int[][] grid, int n, int m, int i, int j){
        if(i >= n || i < 0 || j >= m || j < 0 ) return;
       
        if(grid[i][j] == 1) return;
       
        grid[i][j]=1;
       
        
        visit0(grid, n, m, i-1, j);
        // visit(grid, n, m, i-1, j+1, visited);
        visit0(grid, n, m, i, j-1);
        visit0(grid, n, m, i, j+1);
        // visit(grid, n, m, i+1, j-1, visited);
        visit0(grid, n, m, i+1, j);
        // visit(grid, n, m, i+1, j+1, visited);
    }
    
}