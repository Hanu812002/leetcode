class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=p[0];
        int m=0;
        for(int i=1;i<p.size();i++){
            ans=min(ans,p[i]);
            m=max(m,p[i]-ans);
        }
        return m;
    }
};