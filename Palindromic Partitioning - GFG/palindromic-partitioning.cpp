//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int t[501][501];
 bool ispalin(string& str, int i,int j){
       while(i<j){
           if(str[i]!=str[j]){
               return false;
           }
           i++;
           j--;
       }
       return true;
   }
int solve(string s, int i,int j){
    int n=s.length();
    if(i>=j)
    return 0;
    if(ispalin(s,i,j))
    return 0;
    if(t[i][j]!=-1)
    return t[i][j];
    int mn=INT_MAX;
    for(int k=i;k<=j-1;k++){
        // int temp=solve(s,i,k)+solve(s,k+1,j)+1;
        int l=t[i][k];
        if(l==-1)
        l=solve(s,i,k);
        
        int r=t[k+1][j];
        if(r==-1)
        r=solve(s,k+1,j);
        
        int temp=1+l+r;
        if(temp<mn)
        mn=temp;
    }
    return t[i][j]=mn;
    
}
    int palindromicPartition(string str)
    {
        // code here
            memset(t,-1,sizeof(t));
        int ans= solve(str,0,str.length()-1);
        // if(ispalin(str,0,str.length()-1))
        // cout<<"true";
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends