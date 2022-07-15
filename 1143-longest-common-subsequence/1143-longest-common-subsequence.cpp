class Solution {
public:
    int rec(string x,string y,int n,int m){
      
        // if(n==0 || m==0)
        //     return 0;
        // if(x[n-1]==y[m-1])
        //     return 1+rec(x,y,n-1,m-1);
        // else
        //     return max(rec(x,y,n-1,m),rec(x,y,n,m-1));
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
    int longestCommonSubsequence(string text1, string text2) {
      return rec(text1,text2,text1.length(),text2.length());  
    }
};