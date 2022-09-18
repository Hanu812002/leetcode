class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(arr[m]-m>k)r=m-1;
            else l=m+1;
        }
        return k+l;
    }
};