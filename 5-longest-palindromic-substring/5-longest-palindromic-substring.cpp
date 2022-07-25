class Solution {
public:
    string longestPalindrome(string s) {
//         int n=s.length();
//         int dp[n+1][n+1];
//         for(int i=0;i<=n;i++)
//         {  dp[0][i]=0;
//            dp[i][0]=0;
//         }
//         int res=0;
//         string t=s;
//         reverse(s.begin(),s.end());
//         string ans="";
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++)
//             {
//                 if(s[i-1]==t[j-1]){
//                     dp[i][j]=1+dp[i-1][j-1];
//                      if(res<dp[i][j]){
//                          string str1=s.substr(i-dp[i][j],dp[i][j]);
//                          string str2=str1;
//                          reverse(str1.begin(),str1.end());
//                          if(str1==str2){
//                              res=dp[i][j];
//                              ans=str2;
//                          }
//                      }               
                
                                   
//                 }
//              }
//         }
//         return ans;
//     }
        string str;
    int res=0;
    string s1=s;
    string s2=s;
    reverse(s2.begin(), s2.end());
    int m=s1.size();
    int n=s2.size();
    int t[m+1][n+1];
    for(int i=0; i<m+1; i++)
        for(int j=0; j<n+1; j++)
        {
            if(i==0 || j==0)
                t[i][j]=0;
        }
    for(int i=1; i<m+1; i++)
        for(int j=1; j<n+1; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
                if(res<t[i][j])
                {
                    string temp=s.substr(i-t[i][j],t[i][j]);
                    string temp2=temp;
                    reverse(temp2.begin(), temp2.end());
                    if(temp==temp2) 
                    {
                    res=t[i][j];
                    str=temp;
                    }
                }
            }
            else
                t[i][j]=0;
        }
    return str;
    }
};