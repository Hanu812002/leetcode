//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    long long m=1000000007;
    //Function to count the number of ways in which frog can reach the top.
    long long count(vector<long long>&dp,int n){
        
        if(n<0)
        return 0;
        
        if(n==0)
        return 1;
        
        if(dp[n]!=-1)
        return dp[n];
        
        return dp[n]=(count(dp,n-1)+count(dp,n-2)+count(dp,n-3))%m;
        
        // return ans;
    }
    long long countWays(int n)
    {
        
        // your code here
       vector<long long>dp(n+1,-1);
        return count(dp,n);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends