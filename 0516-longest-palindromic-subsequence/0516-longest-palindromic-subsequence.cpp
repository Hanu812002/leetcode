class Solution {
public:
    int longestPalindromeSubseq(string x) {
         int n=x.length();
        int m=n;
        string y=x;
        reverse(y.begin(),y.end());
        int t[n+1][m+1];
        for(int i=0;i<=m;i++){
            t[0][i]=0;
        }
        for(int i=0;i<=n;i++)
        {
            t[i][0]=0;
        }
          for(int i=1;i<=n;i++){
              for(int j=1;j<=m;j++){
                  
                   if(x[i-1]==y[j-1])
                      t[i][j]=t[i-1][j-1]+1;
                  else
                      t[i][j]=max(t[i-1][j],t[i][j-1]);
              }
          } 
        return t[n][m];

    }
};