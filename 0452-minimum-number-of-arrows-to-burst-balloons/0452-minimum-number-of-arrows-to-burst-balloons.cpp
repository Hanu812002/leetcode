class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end());
        int ans=1;
        int i=0;
        for(int j=1;j<p.size();j++){
            if(p[i][1]>=p[j][0])
             {
                 if(p[i][1]>p[j][1])
                   i=j;
                continue;
             }
            i=j;
            ans++;
        }
        return ans;
    }
};