//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
      //Your code here
      
            stack<int>s;
      int arr1[n];
      arr1[0]=0;
      s.push(A[0]);
      for(int i=1; i<n; i++)
      {
          while(!s.empty() && s.top()>=A[i])
          {
              s.pop();
          }
          if(s.empty())
          {
              arr1[i]=0;
          }
          else
          {
              arr1[i]=s.top();
          }
          s.push(A[i]);
      }
      
      //nearest right smaller k liye
      stack<int>ss;
      int arr2[n];
      arr2[n-1]=0;
      ss.push(A[n-1]);
      for(int i=n-2; i>=0; i--)
      {
          while(!ss.empty() && ss.top()>=A[i])
          {
              ss.pop();
          }
          if(ss.empty())
          {
              arr2[i]=0;
          }
          else
          {
              arr2[i]=ss.top();
          }
          ss.push(A[i]);
      }
      
      //left smaller minus right smaller
      int maxdiff=INT_MIN;
      for(int i=0; i<n; i++)
      {
        //   cout<<arr1[i]<<" "<<arr2[i]<<endl;
          int diff=abs(arr1[i]-arr2[i]);
          maxdiff=max(maxdiff, diff);
      }
      return maxdiff;
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
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends