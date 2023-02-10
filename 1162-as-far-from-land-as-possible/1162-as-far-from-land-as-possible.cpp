class Solution {
public:
    int maxDistance(vector<vector<int>>& g, int steps = 0) {
  queue<pair<int, int>> q, q1;
  for (auto i = 0; i < g.size(); ++i)
    for (auto j = 0; j < g[i].size(); ++j)
      if (g[i][j] == 1)
        q.push({ i - 1, j }), q.push({ i + 1, j }), q.push({ i, j - 1 }), q.push({ i, j + 1 });
  while (!q.empty()) {
    ++steps;
    while (!q.empty()) {
      int i = q.front().first, j = q.front().second;
      q.pop();
      if (i >= 0 && j >= 0 && i < g.size() && j < g[i].size() && g[i][j] == 0) {
        g[i][j] = steps;
        q1.push({ i - 1, j }), q1.push({ i + 1, j }), q1.push({ i, j - 1 }), q1.push({ i, j + 1 });
      }
    }
    swap(q1, q);
  }
  return steps == 1 ? -1 : steps - 1;
}
//     void dfs(vector<vector<int>>&v,int i,int j,vector<vector<int>>grid,int n,int c,vector<vector<int>>&vis){
        
//         if(i<0 || i>=n || j<0 || j>=n || grid[i][j]==1)
//             return ;
        
//         if(vis[i][j]==1)
//         {
//                     v[i][j]=min(v[i][j],c);
//  return ;
//         }
//                 v[i][j]=min(v[i][j],c);

//         vis[i][j]=1;
        
//            dfs(v,i-1,j,grid,n,c+1,vis);
//            dfs(v,i,j+1,grid,n,c+1,vis);
//            dfs(v,i,j-1,grid,n,c+1,vis);
//            dfs(v,i+1,j,grid,n,c+1,vis);
        
//     }
//     int maxDistance(vector<vector<int>>& grid) {
//       int n=grid.size();
//         vector<vector<int>>v(n,vector<int>(n,INT_MAX));
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
                
//                 if(grid[i][j]==1){
//                 vector<vector<int>>vis(n,vector<int>(n,0));
//                  dfs(v,i-1,j,grid,n,1,vis);
//                   dfs(v,i+1,j,grid,n,1,vis);
//                       dfs(v,i,j-1,grid,n,1,vis);
//                       dfs(v,i,j+1,grid,n,1,vis);
//         //             for(int i=0;i<n;i++){
//         //     for(int j=0;j<n;j++){
//         //         cout<<v[i][j]<<" ";
//         //         // if(v[i][j]!=INT_MAX)
//         //         //     ans=max(ans,v[i][j]);
//         //     }
//         //     cout<<endl;
//         // }
//                 }
//             }
//         }
        
//         int ans=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<v[i][j]<<" ";
//                 if(v[i][j]!=INT_MAX)
//                     ans=max(ans,v[i][j]);
//             }
//             cout<<endl;
//         }
        
//         return ans;
//     }
};