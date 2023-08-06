//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    vector<string>ans;
    void permute(string s,int n){
        if(n==s.length()){
            ans.push_back(s);
            return;
        }
        
        for(int i=n;i<s.length();i++){
            swap(s[i],s[n]);
            permute(s,n+1);
            swap(s[i],s[n]);
        }
        return;
    }
    vector<string> permutation(string S)
    {
        //Your code here
        permute(S,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends