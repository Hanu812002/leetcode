class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        vector<int>v(q.size());
        vector<int>pr(arr.size());
        pr[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            pr[i]=pr[i-1]^arr[i];
        }
        for(int i=0;i<q.size();i++){
             if(q[i][0]){
                 v[i]=pr[q[i][1]]^pr[q[i][0]-1];
             }
            else
                v[i]=pr[q[i][1]];
        }
        return v;
    }
};