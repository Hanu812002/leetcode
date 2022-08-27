class Solution {
public:
    int sol(int i, int j, vector<vector<int>>&dp,string w,string s){
        if(i<0)
            return j+1;
        if(j<0)
            return i+1;
        if(dp[i][j]!=-1)return dp[i][j];

        if(w[i]==s[j])
           return dp[i][j]=sol(i-1,j-1,dp,w,s);
        else
           return dp[i][j]=1+min(sol(i-1,j,dp,w,s),min(sol(i-1,j-1,dp,w,s),sol(i,j-1,dp,w,s)));
    }
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return sol(n-1,m-1,dp,word1,word2);
    }
};