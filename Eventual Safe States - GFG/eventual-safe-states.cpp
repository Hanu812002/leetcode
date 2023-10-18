//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int n, vector<int> ad[]) {
        // code here
      vector<int>adj[n];
     for(int i=0;i<n;i++){
         for(auto s : ad[i])
          adj[s].push_back(i);
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



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends