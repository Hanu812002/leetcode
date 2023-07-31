//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        void fun(int i,int&cnt,vector<int>adj[],vector<int>&vis){
          vis[i]=1,cnt++;
          for(auto it:adj[i]){
              if(vis[it]==-1)fun(it,cnt,adj,vis);
          }
       }
       
        long long int numberOfPairs(vector<vector<int>> &pairs,int p,int n)
        {
            vector<int>adj[n];
            for(int i=0;i<pairs.size();i++){
                adj[pairs[i][0]].push_back(pairs[i][1]);
                adj[pairs[i][1]].push_back(pairs[i][0]);
            }
            
            long long total=(n*1ll*(n-1))/2;
            
            vector<int>vis(n,-1);
            for(int i=0;i<n;i++){
                  int cnt=0;
                  if(vis[i]==-1){
                      fun(i,cnt,adj,vis);
                      
                      long long final=(cnt*1ll*(cnt-1))/2;
                      if(cnt>1)
                      total-=final;
                  }
            }
            
            
            return total;
            
             
            // code here
        }


};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        vector<vector<int>> pairs(p,vector<int>(2));
        for(auto &i:pairs)
            for(auto &j:i)
                cin>>j;
        Solution a;
        cout<<a.numberOfPairs(pairs,p,n)<<endl;
    }
}
// } Driver Code Ends