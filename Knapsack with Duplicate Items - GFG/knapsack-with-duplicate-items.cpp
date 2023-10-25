//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int f(int index, int n, int w, int val[], int wt[], vector<vector<int>>&dp) {
        // base case 
        if(index == n or w < 0)return 0;
        
        // pick the element 
        int take = 0;
        if(dp[index][w]!=-1)return dp[index][w];
        if(wt[index] <= w) {
            take = val[index] + f(index, n, w-wt[index], val, wt, dp);
        }
        int not_take = f(index+1, n, w, val, wt, dp);
        dp[index][w] = max(take, not_take);
        return max(take, not_take);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N+1, vector<int>(W+1, -1));
        return f(0, N, W, val , wt, dp);
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends