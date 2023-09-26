//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int k) {
        // Your code goes here
        int n=nums.size();
      vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        if(n==0)
        return ans;
        for(int i=0;i<n;i++){
            int t2=k-nums[i];
            for(int j=i+1;j<n;j++){
                int t=t2-nums[j];
                int x=j+1;
                int y=n-1;
                while(x<y){
                    int s=nums[x]+nums[y];
                    if(s>t)
                     y--;
                     else if(s<t)
                     x++;
                     else{
                         vector<int>v;
                         v.push_back(nums[i]);
                          v.push_back(nums[j]);
                        v.push_back(nums[x]);
                        v.push_back(nums[y]);
                        ans.push_back(v);
                        // v.clear();
                     
                    while(x<y&&nums[x]==v[2])
                    x++;
                while(x<y&&nums[y]==v[3])
                    y--;
                     } 
                }
                    while(j+1<n && nums[j]==nums[j+1])
                    j++;
            }
                while(i+1<n && nums[i]==nums[i+1])
                    i++;
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends