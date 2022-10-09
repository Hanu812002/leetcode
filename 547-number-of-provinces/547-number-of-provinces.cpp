class Solution {
public:
    int findCircleNum(vector<vector<int>>& adj) {
        int cnt=0;
        int V=adj.size();
        vector<bool>vis(V,false);
        
        queue<int>q;
        
        for(int i=0;i<V;++i){
            
            if(!vis[i]){
                cnt++;
                q.push(i);
                vis[i]=true;
                
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(int j=0;j<adj[node].size();++j){
                        
                        if(adj[node][j] && !vis[j]){
                            vis[j]=true;
                            q.push(j);
                        }
                    }
                }
            }
            
        }
        return cnt;
    }
};