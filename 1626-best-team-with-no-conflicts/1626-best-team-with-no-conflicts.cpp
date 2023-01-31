class Solution {
public:
//     void fun(int &ans,vector<pair<int,int>>&v,int i){
//         if(i==v.size())
//             return;
        
//         if(v[i-1].first<v[i].first && v[i-1].second>v[i].second){
//             int l=v[i-1].second;
//             int r=v[i].second;
//             fun(ans,v,i+1);
//             ans+=max(l,r);
//         }
//         else{
//             ans+=v[i-1].second;
//             fun(ans,v,i+1);
//         }
//     }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>v;
        for(int i=0;i<ages.size();i++)
            v.push_back({ages[i],scores[i]});
        
        int ans=0;
        int dp[v.size()];
        sort(v.begin(),v.end());
        for(int i = 0; i < v.size(); i++) {
            dp[i] = v[i].second;
            for(int j = 0; j < i; j++) {
                if(v[j].second <= v[i].second)
                    dp[i] = max(dp[i], dp[j] + v[i].second);
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};