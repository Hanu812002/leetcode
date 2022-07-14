// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
   int isSubsetSum(int arr[], int sum,int n){
        // code here 
        // int n=arr.size();
        bool t[n+1][sum+1];
        for(int i=0;i<=n;i++){
            t[i][0]=1;
        }
        for(int i=1;i<=sum;i++)
        {
            t[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
              if(arr[i-1]<=j){
                  t[i][j]=t[i-1][j] || t[i-1][j-arr[i-1]];
              }    
              else
              t[i][j]=t[i-1][j];
            }
        }
        vector<int>v;
        for(int i=0;i<=sum/2;i++){
            if(t[n][i]==1)
            v.push_back(i);
        }
        
        int mi=INT_MAX;
        for(int i=0;i<v.size();i++){
            mi=min(mi,sum-2*v[i]);
        }
        return mi;
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int s=0;
	    for(int i=0;i<n;i++)
	    s+=arr[i];
	    
	   return  isSubsetSum(arr,s,n);
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends