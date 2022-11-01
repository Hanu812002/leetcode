class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int>adj[n];
	        int m=pre.size();
        for(int i=0;i<m;i++){
    int a=pre[i][0];
    int b=pre[i][1];
    adj[b].push_back(a);
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
    int count=0;
    while(!q.empty()){
        
        int temp=q.front();
        q.pop();
        count++;
       ans.push_back(temp);
        for(auto x:adj[temp]){
            indegree[x]--;
            if(indegree[x]==0){
                q.push(x);
            }
        }
        
        
    }
    if(count==n)return ans;
    return {};
    }
};