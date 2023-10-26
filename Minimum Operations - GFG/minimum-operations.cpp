//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int fun(int n,int i){
        
        if(i>n)
        return 1e8;
        
        if(i==n)
        return 0;
        
        
        int o=1+fun(n,i+1);
        int d=1+fun(n,2*i);
        
        return min(o,d);
        
    }
    int minOperation(int n)
    {
        //code here.
        
        // return 1+fun(n,1);
         int count = 0;
        
        while(n > 0) {
            if(n % 2 == 0) n /= 2;
            else n -= 1;
            count++;
        }
       
        return count;
       
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
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends