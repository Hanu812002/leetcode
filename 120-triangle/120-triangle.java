class Solution {
   public int minimumTotal(List<List<Integer>> triangle) 
    {
        int n=triangle.size();
        
        int[][] dp=new int[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j]=-1;
            }
        }
        return f(0,0,triangle,dp,n);
    }
    public int f(int i, int j, List<List<Integer>> triangle, int[][] dp, int n)
    {
        if(i==n-1)
        {
            return triangle.get(i).get(j);
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        int d=triangle.get(i).get(j)+f(i+1,j,triangle,dp,n);
        int dg=triangle.get(i).get(j)+f(i+1,j+1,triangle,dp,n);
        
        dp[i][j]=Math.min(d,dg);
        
        return dp[i][j];
    }
}