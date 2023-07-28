//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        if(A.length()>=B.length() and A.find(B)!=-1) return 1;
        
        int count=1;
        
        string dup=A;
        
        while(A.length()<B.length()){
            A+=dup;
            count++;
        }
        if(A.find(B)!=-1) return count;
        A+=dup;
        count++;
        if(A.find(B)!=-1) return count;
        else return -1;
    }
  
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}

// } Driver Code Ends