//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        string str="";
        if(N==0 && S==0)
        return "";
        
        if(N==0)
        return "-1";
        
        if(S==0 && N>1)
        return "-1";
        
        
        if(9*N<S)
        return "-1";
        
        
        for(int i=0;i<N;i++){
            if(S==0)
             str+="0";
             
            else if(S<=9)
            {
                str+=to_string(S);
                S=0;
            }
            else{
                str+="9";
                S-=9;
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends