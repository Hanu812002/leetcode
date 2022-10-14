//{ Driver Code Starts
// Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

// Position this line where user code will be pasted.

class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[][] grid = new int[n][m];

            for (int i = 0; i < n; i++) {

                for (int j = 0; j < m; j++) {
                    grid[i][j] = sc.nextInt();
                }
            }

            Solution ob = new Solution();
            int ans = ob.countDistinctIslands(grid);
            System.out.println(ans);
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {

    int countDistinctIslands(int[][] grid) {
        int n = grid.length;
       Set<List<Integer>> s=new HashSet<>();
        int m = grid[0].length;
        boolean[][] visited = new boolean[n][m];
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && visited[i][j] == false){
                    List<Integer>l=new ArrayList<>();
                    visit(grid, n, m, i, j, visited,l,i,j);
                    s.add(l);
                }
            }
        }
        return s.size();
    }
    void visit(int[][] grid, int n, int m, int i, int j, boolean[][] visited,List<Integer>l,int sr,int sc){
        if(i >= n || i < 0 || j >= m || j < 0 ) return;
        if(grid[i][j] == 0 || visited[i][j] == true) return;
        visited[i][j] = true;
        l.add(i-sr);
        l.add(j-sc);
        visit(grid, n, m, i-1, j, visited,l,sr,sc);
        visit(grid, n, m, i, j-1, visited,l,sr,sc);
        visit(grid, n, m, i, j+1, visited,l,sr,sc);
        visit(grid, n, m, i+1, j, visited,l,sr,sc);
    }
}
