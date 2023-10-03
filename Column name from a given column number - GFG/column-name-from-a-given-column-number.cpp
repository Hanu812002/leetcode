//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int c)
    {
        // your code here
         string ans="";
        
        while(c>26){
            int m=c%26;
            if(m==0){
                m=26;
                c--;
            }
            int s=('A'+m-1);
            // cout<<s<<endl;
            ans+=s;
            c=c/26;
        }
        // ans=('A'+c-1)+ans;
        ans+=('A'+c-1);
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends