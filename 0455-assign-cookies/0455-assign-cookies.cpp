class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        if(s.size()==0 || g.size()==0)
         return 0;
        int ans=0;
        int j=0;
        for(int i=0;i<g.size();i++){
             if( j<s.size() && g[i]<=s[j] ){
                 ans++;
                 j++;
             }
        }
        return ans;
    }
};