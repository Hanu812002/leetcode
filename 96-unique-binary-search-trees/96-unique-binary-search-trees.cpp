class Solution {
public:
    int numTrees(int n) {
     vector<int>dp(n+1,-1);
         dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int a=0;
            for(int j=1;j<=i;j++)
                a+=dp[j-1]*dp[i-j];
        
        dp[i]=a;
        }
        return dp[n];   
    }
};