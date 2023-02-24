class Solution {
public:
    int findMin(vector<int>& arr) {
       int s=0;
        int e=arr.size()-1;
        while(s<e){
            if(arr[s]<arr[e])
             return arr[s];
            int m=s+(e-s)/2;
            if(arr[m]>=arr[s])
             s=m+1;
            else
            e=m;
        }
        return arr[s];
    }
};