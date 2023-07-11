//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		
 		int t=0;
 		int l=0;
 		int d=n-1;
 		int r=m-1;
 		int c=0;
 		while(t<=d && l<=r){
 		    for(int i=l;i<=r;i++){
 		        c++;
 		        if(c==k)
 		        return a[l][i];
 		    }
 		    t++;
 		    
 		    for(int i=t;i<=d;i++){
 		        c++;
 		        if(c==k)
 		        return a[i][r];
 		    }
 		    r--;
 		    
 		    if(t<=d){
 		    for(int i=r;i>=l;i--){
 		        c++;
 		        if(c==k)
 		        return a[d][i];
 		    }
 		    d--;
 		    }
 		    if(l<=r){
 		    for(int i=d;i>=t;i--){
 		        c++;
 		        if(c==k)
 		        return a[i][l];
 		    }
 		    l++;
 		    }
 		}
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends