class Solution {
public:
    void dfs(vector<vector<char>>board,  vector<vector<int>>&vis,int i,int j,int m,int n){
        
        if(i<0 || i>m-1 || j<0 || j>n-1 || vis[i][j]==1 || board[i][j]=='X')
            return;
        
        vis[i][j]=1;
        
        dfs(board,vis,i+1,j,m,n);
        dfs(board,vis,i,j-1,m,n);
        dfs(board,vis,i-1,j,m,n);
        dfs(board,vis,i,j+1,m,n);
    }
    void solve(vector<vector<char>>& board) {
      int m=board.size();
        int n=board[0].size();
        
    vector<vector<int>>vis(m,vector<int>(n,0));
        
      for(int i=0;i<m;i++)
      {
          if(board[i][0]=='O')
              dfs(board,vis,i,0,m,n);
          if(board[i][n-1]=='O')
              dfs(board,vis,i,n-1,m,n);
      }
        
        for(int i=0;i<n;i++){
            if(board[0][i]=='O')
                dfs(board,vis,0,i,m,n);
            
            if(board[m-1][i]=='O')
                dfs(board,vis,m-1,i,m,n);
        }
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                if(vis[i][j]==0 && board[i][j]=='O')
                    board[i][j]='X';
                
            }
        }
    }
};