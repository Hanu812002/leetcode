class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
       stack<pair<int,int>>s;
       int n=t.size();
       vector<int>v(n,0);
       for(int i=0;i<t.size();i++) {
           int cur=t[i];
           int curi=i;

           while(!s.empty() && cur>s.top().second){
               v[s.top().first]=curi-s.top().first;
               s.pop();
           }
           s.push({i,t[i]});
       }
       return v;
    }
};