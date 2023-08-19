//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
          vector<int>sol;
        bool flag=false;
        int f=0,l=0;
        long long cs=0;
     for(int i=0;i<n;i++){
         cs=cs+arr[i];
        if(cs>=s){
            l=i;
            while(f<l && cs>s){
                cs -=arr[f];
                f++;
            }
            if(cs==s){
              sol.push_back(f+1);
              sol.push_back(l+1);
              flag= true;
              break;
            }
        }
         
     }  
     
     if(flag==false)
     sol.push_back(-1);
     
     return sol;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends