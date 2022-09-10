class Solution {
    public int maxProfit(int K, int[] A) {
        
          int N=A.length;
        if(N==0)
            return 0;
         int [][]dp=new int[K+1][N];
        for(int i=1;i<=K;i++){
            int m=Integer.MIN_VALUE;
            for(int j=1;j<N;j++){
                if(dp[i-1][j-1]-A[j-1]>m)
                m=dp[i-1][j-1]-A[j-1];
                
                if(m+A[j]>dp[i][j-1])
                dp[i][j]=m+A[j];
                else
                dp[i][j]=dp[i][j-1];
                
            }
        }
        return dp[K][N-1];
    
    }
}