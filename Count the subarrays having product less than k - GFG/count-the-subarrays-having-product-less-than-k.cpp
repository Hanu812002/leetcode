//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends



// #define int  long long
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& nums, int n, long long k) {
         int c=0;
        if(k<=1)
            return 0;
        int i=0;
        int j=0;
         long long p=1;
        while(i<nums.size()){
            p*=nums[i];
            while(p>=k)
                p=p/nums[j++];
            
            c+=1+(i-j);
            i++;
        }
        
       return c; 
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends