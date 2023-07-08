//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
         sort(arr,arr+n);
        int sum=0;
        for(int i=0;i<n-2;i++){
            
            int a=i+1;
            int b=n-1;
            
            while(a<b){
                sum=arr[i]+arr[a]+arr[b];
                
                if(sum==0)
            {   
                // cout<<i<<" "<<a<<"  "<<b<<endl;
                return 1;}
                
                else if(sum>0)
                b--;
                
                else
                  a++;
            }
            
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends