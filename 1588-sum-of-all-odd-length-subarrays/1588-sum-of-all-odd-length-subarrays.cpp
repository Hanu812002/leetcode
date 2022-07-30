class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        for(int i=1;i<arr.size();i++)
            arr[i]=arr[i]+arr[i-1];
        
        int n=arr.size()-1;
        int s=arr[n];
        int i=0;
        int j=2;
        while(j<=n){
            i=0;
            s+=arr[j];
            int k=j+1;
            while(k<=n){
                s+=(arr[k]-arr[i]);
                k++;
                i++;
            }
            j+=2;
        }
        return s;
    }
};