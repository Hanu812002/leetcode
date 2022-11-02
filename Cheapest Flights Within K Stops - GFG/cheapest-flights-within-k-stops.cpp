//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int k)  {
       vector<int> dis(n,1e9);

 

        dis[src] = 0;

        

        vector<pair<int,int > > adj[n];

        

        for(int i=0;i<flights.size();i++){

            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});

        }

        

        queue<pair<int,pair<int, int > > > q;

        q.push({0,{src,0}});

        //{stops,{node,dist}}

        while(!q.empty()){

            auto fli = q.front();

            q.pop();

            int step = fli.first;

            int node = fli.second.first;

            int cost = fli.second.second;

            

            if(step > k){

                break;

            }

            

            for(auto it : adj[node]){

                int v = it.first;

                int w = it.second;

                

                if(cost + w < dis[v]){

                    dis[v] = cost + w;

                }

                q.push({step+1,{v,cost+w}});

            }

        }

        

        return dis[dst] == 1e9? -1 : dis[dst];
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        int edge; cin>>edge;
        vector<vector<int>> flights;
        
        for(int i=0; i<edge; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }
        
        int src,dst,k;
        cin>>src>>dst>>k;
        Solution obj;
        cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends