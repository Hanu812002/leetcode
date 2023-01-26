class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int>v(arr.begin(),arr.end());
        sort(v.begin(),v.end());
        unordered_map<int,int>m;
        int x=0;
        for(int i=0;i<v.size();i++){
            if(m.count(v[i])==0)
                m[v[i]]=++x;
        }
        
        for(int i=0;i<arr.size();i++){
        arr[i]=m[arr[i]];
        }
        return arr;
    }
};