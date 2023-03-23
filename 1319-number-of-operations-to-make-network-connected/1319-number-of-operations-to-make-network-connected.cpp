class Solution {
public:
    void dfs(vector<int> adj[], vector<bool> &visited, int src)
    {
        visited[src] = true;
        for(int i : adj[src]){
            if(!visited[i]){
                dfs(adj, visited, i);
            }
        }
    }
public:
    int makeConnected(int n, vector<vector<int>>& arr) {
        int len = arr.size();
        if(len<n-1) return -1;
         vector<int> adj[n];
        for(auto v : arr)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        vector<bool> visited(n, false);
        int ans = 0;
        for(int i=0; i<n; i++)
        if(!visited[i])
        {
            dfs(adj, visited, i);
            ans++;
        }
        return ans - 1;
    }
//     int makeConnected(int n, vector<vector<int>>& conn) {
        
//         int c=0;
//         int edge=0;
//         // queue<int>q;
//         unordered_map<int,vector<int>>mp;
//         for(int i=0;i<conn.size();i++){
//             mp[conn[i][0]].push_back(conn[i][1]);
//         }
//         vector<int>vis(n,0);
//         for(int i=0;i<n;i++){
            
//             if(vis[i]==0){
//                 c++;
//                 vis[i]=1;
//                 for(auto in : mp[i])
//                  {   
//                      vis[in]=1;
//                  }
//             }
//             else{
//                 for(auto in : mp[i]){
//                     if(vis[in]==1)
//                         edge++;
//                     else
//                         vis[in]=1;
//                 }
//             }
//         }
//         cout<<edge<<endl;
//         if(edge>=c-1)
//             return c-1;
//         else
//             return -1;
//     }
};