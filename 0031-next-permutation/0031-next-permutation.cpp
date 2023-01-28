class Solution {
public:
    void nextPermutation(vector<int>& arr) {
       // code here
        int n=arr.size();
        int i=n-2;
        while(i>=0){
            if(arr[i]<arr[i+1])
             break;
             
            i--;
        }
        if(i<0)
        {
            reverse(arr.begin(),arr.end());
            // return arr;/
            
        }
        else{
       int j=n-1;
       while(i>=0 && arr[j]<=arr[i] && j>i)
        j--;
        
        // cout<<i<<" "<<j<<endl;
      swap(arr[i],arr[j]);
      reverse(arr.begin()+i+1,arr.begin()+n);
       // return arr;
        }
    }
};