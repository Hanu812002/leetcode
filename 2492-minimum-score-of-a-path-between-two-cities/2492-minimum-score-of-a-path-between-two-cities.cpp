class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
         int ans = INT_MAX;
        vector<vector<pair<int, int>>> gr(n+1);
        for(auto edge : roads){ 
            gr[edge[0]].push_back({edge[1], edge[2]}); // u-> {v, dis}
            gr[edge[1]].push_back({edge[0], edge[2]}); // v-> {u, dis}
        }

        vector<int> vis(n+1, 0);
        queue<int> q;
        q.push(1); vis[1] = 1;
        while(!q.empty()){
            auto node = q.front(); q.pop();
            for(auto& [v, dis] : gr[node]){
                ans = min(ans, dis);
                if(vis[v]==0){
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }

        return ans;

//     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > q;
//         unordered_map<int,vector<pair<int,int>>>mp;
//         vector<int>vis(n+1,0);
//         vis[1]=1;
//         for(int i=0;i<roads.size();i++){
//             mp[roads[i][0]].push_back({roads[i][1],roads[i][2]});
//             mp[roads[i][1]].push_back({roads[i][0],roads[i][2]});
//             if(roads[i][1]==1)
//                 q.push({roads[i][2],roads[i][1]});
//             else if(roads[i][0]==1)
//                 q.push({roads[i][2],roads[i][0]});
//         }
//         int ans=INT_MAX;
//         while(!q.empty()){
//             auto a=q.top();
//             q.pop();
//             int node=a.second;
//             int cost=a.first;
//             if(node==n)
//                 ans=min(ans,cost);
//             vis[node]=1;
            
//             for(auto i : mp[node]){
//                 int nnode=i.first;
//                 if(vis[nnode]==0){
//                 int nc=min(cost,i.second);
//                 q.push({nc,nnode});
//                 }
//             }
//         }
//         return ans;
    }
};