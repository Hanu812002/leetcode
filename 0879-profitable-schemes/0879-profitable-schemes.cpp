/*class Solution {
public:
    int ans=0;
    void fun(int n, int minProfit, vector<int>& group, vector<int>& profit,int tm,int tp,int i){
        
        if(i==group.size()){
            if(tm<=n && tp>=minProfit)
                ans++;
            
            return;
        }
        
        if(tm>n)
            return;
       
        fun(n,minProfit,group,profit,tm,tp,i+1);
        tm+=group[i];
        tp+=profit[i];
        fun(n,minProfit,group,profit,tm,tp,i+1);
        
        
        
    }
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        
        ans=0;
        fun(n,minProfit,group,profit,0,0,0);
        return ans;
    }
};*/


class Solution {
public:
   int MOD = 1000000007;
  vector<vector<vector<int>>>dp;
    int fun(int n, int minProfit, vector<int>& group, vector<int>& profit,int i){
        
        if(n<0)
            return 0;
        if(i==group.size()){
            if( minProfit>0)
                return 0;
            
            else
                return 1;
        }
      
        if (minProfit < 0) minProfit = 0;
        
        if (dp[minProfit][n][i] != -1) return dp[minProfit][n][i];
        
       int np= fun(n,minProfit,group,profit,i+1);
        
        
        int p=fun(n-group[i],minProfit-profit[i],group,profit,i+1);
        
        
        return dp[minProfit][n][i] = (p + (long long)np) % MOD;
        
        
    }
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        
       int sz = group.size();
      dp = vector<vector<vector<int>>>(minProfit + 1, vector<vector<int>>(n + 1, vector<int>         (sz, -1)));
       return fun(n,minProfit,group,profit,0);
        
    }
};