class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        stack<pair<int,int>>s;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            int cur=i;
            int curt=t[i];
            while(!s.empty() && s.top().second < curt){
                
                v[s.top().first]=cur-s.top().first;
                s.pop();
            }
            s.push({i,t[i]});
        }
        return v;
    }
};