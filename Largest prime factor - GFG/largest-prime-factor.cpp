//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
           long long int max = 0; // answer will be return
    for (int i = 2; i <= sqrt(N); i++) { //if there is any prime that made by N

        //devide by prime as much as it can
        while (N % i == 0) {
            N /= i;
            max = i;
        }
        //such as 4, it will ignore because being separated into double 2
    }

    //if after devided and can not be 1, there's a prime number left
    if (N != 1) {
        max = N;
    }
    return max;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends