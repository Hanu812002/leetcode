//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int max_s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        int s=0;
        int c=0;
        for(int j=0;j<n;j++){
            s+=matrix[i][j];
        }
        sum+=s;
        max_s=max(max_s,s);
        for(int k=0;k<n;k++){
            c+=matrix[k][i];
        }
        max_s=max(max_s,c);
    }
    
    
    return max_s*n-sum;
    // return 0;
    
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends