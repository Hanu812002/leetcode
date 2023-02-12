class Solution {
public:
//     long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
       
//         int n=roads.size();
//         // int dis[n+1]={-1};
//         vector<int>dis(n+1,-1);
//         dis[0]=0;
//         vector<int>adj[n+1];
//         vector<int>vis(n+1,0);
//         vis[0]=1;
//         for(int i=0;i<n;i++){
//             adj[roads[i][0]].push_back(roads[i][1]);
//               adj[roads[i][1]].push_back(roads[i][0]);
//         }
        
//         queue<pair<int,int>>q;
        
//         for(auto i : adj[0]){
//             q.push({i,1});
//         }
        
//         while(!q.empty()){
//             int sz=q.size();
//             auto it=q.front();
//             q.pop();
            
//             int node=it.first;
//             int step=it.second;
            
//             dis[node]=step;
//             vis[node]=1;
//             for(auto x: adj[node]){
//                 if(vis[x]==0)
//                     q.push({x,step+1});
//             }
//         }
        
        
//         int ans=0;
//         unordered_map<int, int> mp;
//             // map<int, int,greater<int>>::iterator it;

//         for(int i=0;i<=n;i++)
//             mp[dis[i]]++;
        
//         sort(dis.rbegin(),dis.rend());
//         int k=0;
//           int s=seats;
//         while(k<n+1)
//         {
//             int a=dis[k++];
//             s=seats;
//             if(mp.find(a)!=mp.end()){
          
//             if(a<=s){
//                 ans+=a;
//                 while(a>0){
//                     mp[a]--;
//                     if(mp[a]==0)
//                         mp.erase(a);
//                     a--;
//                 }
//             }
//             else{
//                 ans+=a;
//                 while(s>0){
//                     mp[a]--;
//                      if(mp[a]==0)
//                         mp.erase(a);
//                     a--;
//                     s--;
//                 }
//             }
//         }
//     } 
//         return ans;;
//     }
// };
 vector<vector<int>> edges;
    vector<bool> visit;
    long long ret=0;
    int count(int cur,int k){
        int cnt=1;
        visit[cur]=true;
        for(auto i:edges[cur]){
            if(visit[i]==false){
                cnt+= count(i,k);
            }
        }
        if(cur!=0){
            ret+=((cnt+k-1)/k);

        }
        return cnt;
    }

    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n =roads.size();
        edges.resize(n+1);
        visit.resize(n+1);
        for(auto road:roads){
            edges[road[0]].push_back(road[1]);
            edges[road[1]].push_back(road[0]);
        }
        count(0,seats);
        return ret;
    }
};