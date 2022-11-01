class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& ad) {
        int n=ad.size();
         vector<int>adj[n];
     for(int i=0;i<n;i++){
         for(int j=0;j<ad[i].size();j++)
          adj[ad[i][j]].push_back(i);
     }
        vector<int>ans;
      vector<int>indegree(n,0);
      for(int i=0;i<n;i++){
          for(auto x:adj[i]){
              indegree[x]++;
          }
      }
        queue<int>q;
     
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
    
    while(!q.empty()){
        
        int temp=q.front();
        q.pop();
       ans.push_back(temp);
        for(auto x:adj[temp]){
            indegree[x]--;
            if(indegree[x]==0){
                q.push(x);
            }
        }
        
        
    }
    
    sort(ans.begin(),ans.end());
    return ans;
    
    }
};