//{ Driver Code Starts
// Initial Template for Java

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
            int ans = ob.numberOfEnclaves(grid);
            System.out.println(ans);
        }
    }
}
// } Driver Code Ends


// User function Template for Java
class pair{
    int f;
    int s;
    public pair(int f,int s){
        this.f=f;
        this.s=s;
    }
}
class Solution {

    int numberOfEnclaves(int[][] grid) {
      Queue<pair>q=new LinkedList<pair>();

        int n=grid.length;
        int m=grid[0].length;
      int vis[][]=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || j == m-1 || i==n-1){
                    if(grid[i][j]==1)
                      {
                          q.add(new pair(i,j));
                          vis[i][j]=1;
                      }
                }
            }
        }
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, +0, -1}; 
        while(!q.isEmpty()){
            int a=q.peek().f;
            int b=q.peek().s;
            q.remove();
              for(int i = 0;i<4;i++) {
                int nrow = a+ delrow[i];
                int ncol = b + delcol[i]; 
            
                if(nrow >=0 && nrow <n && ncol >=0 && ncol < m 
                && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                    q.add(new pair(nrow, ncol));
                    vis[nrow][ncol] = 1; 
                }
            }
        }
        
        
         int cnt = 0;
        for(int i = 0;i<n;i++) {
            for(int j = 0;j<m;j++) {
            
                if(grid[i][j] == 1 & vis[i][j] == 0) 
                    cnt++; 
            }
        }
        return cnt; 
    }
}