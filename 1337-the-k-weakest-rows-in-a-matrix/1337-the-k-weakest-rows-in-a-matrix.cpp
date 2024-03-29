class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
        
        for(int i=0;i<mat.size();i++){
            int c=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0)
                    break;
                c++;
            }
            pq.push({c,i});
        }
        
        vector<int>v;
        for(int i=0;i<k;i++){
            auto a=pq.top();
            v.push_back(a.second);
            pq.pop();
        }
        return v;
    }
};