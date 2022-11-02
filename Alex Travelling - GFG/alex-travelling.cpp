//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int minimumCost(vector<vector<int>>& flights, int n, int K) 
    {
        vector<int> dis(n+1,1e9);
        dis[K] = 0;
        vector<pair<int,int > > adj[n+1];
        for(int i=0;i<flights.size();i++)
        {
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        queue<int> q;
        q.push(K);
        while(!q.empty()){
            int fli = q.front();
            q.pop();
            for(auto it : adj[fli]){
                int v = it.first;
                int w = it.second;
                if(dis[fli] + w < dis[v]){
                    dis[v] =  dis[fli] + w;
                    q.push(v);
                }
            }
        }
        int maxi = 0;
        for(int i =1;i<=n;i++){
            
            if(dis[i]==1e9)
            return -1;
            
            maxi = max(maxi,dis[i]);
        }
        return maxi;
}
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<vector<int>> flight;
        int size;
        cin >> size;
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int i = 0; i < 3; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flight.push_back(temp);
        }

        Solution ob;
        cout << ob.minimumCost(flight, N, K) << "\n";
    }
}

// } Driver Code Ends