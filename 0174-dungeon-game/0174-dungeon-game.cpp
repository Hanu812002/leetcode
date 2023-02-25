class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& d) {
      
        int m=d.size();
        int n=d[0].size();
        
        vector<vector<int>>v(m+1,vector<int>(n+1,INT_MAX));
        
        v[m][n-1]=1;
        v[m-1][n]=1;
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                
                int x=min(v[i+1][j],v[i][j+1])-d[i][j];
                
                v[i][j]=x>0?x:1;
            }
        }
        return v[0][0];
    }
};