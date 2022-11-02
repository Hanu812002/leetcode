class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
         vector<int> dis(n,1e9);

 

        dis[src] = 0;

        

        vector<pair<int,int > > adj[n];

        

        for(int i=0;i<flights.size();i++){

            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});

        }

        

        queue<vector<int>> q;

        q.push({0,src,0});

        

        while(!q.empty()){

            auto fli = q.front();

            q.pop();

            int step = fli[0];

            int node = fli[1];

            int cost = fli[2];

            

            if(step > k){

                continue;

            }

            

            for(auto it : adj[node]){

                int v = it.first;

                int w = it.second;

                

                if(cost + w < dis[v]){

                    dis[v] = cost + w;
 q.push({step+1,v,cost+w});
                }

                // q.push(step+1,v,cost+w});

            }

        }

        

        return dis[dst] == 1e9? -1 : dis[dst];
    }
};