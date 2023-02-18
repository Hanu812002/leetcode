class Solution {
public:
    int dp[45]={0};
    
    int fun(int n,int i){
        if(i>n)
            return 0;
        
        if(i==n)
            return 1;
        
        if(dp[i]!=0)
            return dp[i];
        
       return dp[i]=fun(n,i+1)+fun(n,i+2);
    }
    int climbStairs(int n) {
        return fun(n,0);
    }
};