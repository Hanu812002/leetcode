//{ Driver Code Starts
//Initial template for C++
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int minLength(string s, int n) {
        // code here
           stack<char>st;
           
           int i=0;
           
           while(i<n){
               
               if(st.empty())
               {
                   st.push(s[i]);
                   i++;
               }
               else{
                   string str(1,st.top());
                   
                   str+=s[i];
                   
                //   cout<<str<<endl;
                   if(str=="12" || str=="21" || str=="34" || str=="43" || str=="56" || str=="65" || str=="78" || str=="87" || str=="09" || str=="90")
                   {
                       st.pop();
                       i++;
                   }
                   else
                   {
                       st.push(s[i]);
                       i++;
                   }
               }
           }
           return st.size();
    } 
};


//{ Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends