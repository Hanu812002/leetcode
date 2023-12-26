class Solution {
    public int numRollsToTarget(int n, int k, int target) {
        int [][]dp=new int[n+1][target+1];
        for(int[] i: dp)
            Arrays.fill(i,-1);
        
        return fun(dp,n,k,target);
            
    }
    private int fun(int [][]dp,int n,int k,int target){
        if(n<0 || target<0)
            return 0;
        if(n==0 && target==0)
            return 1;
        
        if(dp[n][target]!=-1)
            return dp[n][target];
        int c=0;
        for(int i=1;i<=k;i++)
        {
            if(i<=target)
                c=(c+fun(dp,n-1,k,target-i))%1000000007;
        }
        dp[n][target]=c;
        
        return dp[n][target];
    } 
}