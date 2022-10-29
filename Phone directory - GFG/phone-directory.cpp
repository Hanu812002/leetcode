//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>>v1;

        for(int i=1;i<=s.length();i++)

        {

            vector<string>v;

            string s2="";

            int flag=0;

            s2.append(s.begin(),s.begin()+i);

            

            for(int j=0;j<n;j++)

            {

                  size_t found = contact[j].find(s2);

                  

                  if(found!=string::npos)

                  {

                      v.push_back(contact[j]);

                      flag=1;

                  }

            }

            if(flag==0)

            v.push_back("0");

            sort(v.begin(),v.end());

            v.erase(unique(v.begin(),v.end()),v.end());

           

            v1.push_back(v);

        }

        return v1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends