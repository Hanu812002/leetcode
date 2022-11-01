//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& e, int n,int M, int src){
        // code here
        vector<int>v(n,1e9);
        vector<int>adj[n];
        for(int i=0;i<M;i++){
            adj[e[i][0]].push_back(e[i][1]);
            adj[e[i][1]].push_back(e[i][0]);
        }
        
       
        queue<int>q;
        v[src]=0;
        q.push(src);
        while(!q.empty()){
            int a=q.front();
            q.pop();
            for(auto it :adj[a]){
                if(v[a]+1<v[it]){
                    v[it]=1+v[a];
                    q.push(it);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(v[i]==1e9)
             v[i]=-1;
        }
        
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends