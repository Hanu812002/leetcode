class Solution {
public:
    int coinChange(vector<int>& coins, int v) {
        int m=coins.size();
     int dp[m+1][v+1];
	    for(int i=0;i<=m;i++){
	        dp[i][0]=0;
	    }
	    for(int i=0;i<=v;i++){
	        dp[0][i]=INT_MAX-1;
	    }
	    for(int i=1;i<=v;i++){
	        if(i%coins[0]==0)
	        dp[1][i]=i/coins[0];
	        else
	        dp[1][i]=INT_MAX-1;
	    }
	    for(int i=2;i<=m;i++){
	        for(int j=1;j<=v;j++){
	            if(coins[i-1]<=j)
	            dp[i][j]=min(1+dp[i][j-coins[i-1]] , dp[i-1][j]);
	            else
	            dp[i][j]=dp[i-1][j];
	        }
	    }
	    if(dp[m][v]==INT_MAX-1)
	    return -1;
	    
	    
	    return dp[m][v];   
    }
};