class Solution {
public:
    void dfs(vector<int>&v,vector<vector<int>>&vv,vector<int>&vis){
        
       for(int i=0;i<v.size();i++){
           if(vis[v[i]]==1)
               continue;
           else{
               vis[v[i]]=1;
               dfs(vv[v[i]],vv,vis);
           }
       }    
        
        return ;
    }
    
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>vis(n,0);
        
        vector<vector<int>>v(n);
        
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0];
            int b=edges[i][1];
            
            v[a].push_back(b);
         
        }
        
        
        for(int i=0;i<n;i++){
        
             dfs(v[i],v,vis);
//             for(int i=0;i<vis.size();i++){
//             // if(vis[i]==0)
//                 cout<<vis[i]<<" ";
//         }
//             cout<<endl;
            
        }
                vector<int>ans;

        for(int i=0;i<vis.size();i++){
            if(vis[i]==0)
            ans.push_back(i);
        }
        
        return ans;
    }
};