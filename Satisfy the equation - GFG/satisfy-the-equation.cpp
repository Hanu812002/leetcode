//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> satisfyEqn(int arr[], int n) {
         vector<int> ans(4, -1);

        map<int, pair<int, int>> m;

        

        for(int i = 0 ; i < n; i++){

            for(int j = i+1; j < n; j++){

                int currSum = arr[i] + arr[j];

                if(m.find(currSum) != m.end()){

                    if(m[currSum].first != i and m[currSum].second != i and m[currSum].first != j and m[currSum].second != j){

                        vector<int> temp(4);

                        temp[0] = m[currSum].first;

                        temp[1] = m[currSum].second;

                        temp[2] = i;

                        temp[3] = j;

                        

                        if(ans[0] == -1){

                            ans = temp;

                        }

                        else{

                            if(ans[0] > temp[0]) ans = temp;

                            else if(ans[1] > temp[1] and ans[0] == temp[0]) ans = temp;

                            else if(ans[2] > temp[2] and ans[0] == temp[0] and ans[1] == temp[1]) ans = temp;

                            else if(ans[3] > temp[3] and ans[2] == temp[2] and ans[0] == temp[0] and ans[1] == temp[1]) ans = temp;

                        }

                        m.erase(currSum);

                    }

                }

                else{

                    m[currSum] = {i, j};

                }

            }

        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends