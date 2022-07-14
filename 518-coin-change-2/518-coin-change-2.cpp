class Solution {
public:
    int change(int n, vector<int>& S) {
        int m=S.size();
    int tb[m+1][n+1];
        for(int i=0;i<=m;i++){
            tb[i][0] = 1;
        }
        for(int i=1;i<=n;i++){
            tb[0][i] = 0;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(S[i-1]<=j){
                    tb[i][j] = tb[i][j-S[i-1]]+tb[i-1][j];
                }
                else{
                    tb[i][j] = tb[i-1][j];
                }
            }
        }
        return tb[m][n];

    }
};