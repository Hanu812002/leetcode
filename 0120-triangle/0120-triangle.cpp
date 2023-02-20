class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        
        for(int i=1;i<t.size();i++){
            int n=i+1;
            for(int j=0;j<n;j++){
                if(j==0){
                 t[i][j]+=t[i-1][j];   
                }
                else if(j==n-1)
                {
                    t[i][j]+=t[i-1][j-1];
                }
                else{
                    t[i][j]+=min(t[i-1][j-1],t[i-1][j]);
                }
            }
        }
        int n=t.size();
        int ans=INT_MAX;
        for(int i=0;i<t[n-1].size();i++){
            ans=min(ans,t[n-1][i]);
        }
        
        return ans;
    }
};