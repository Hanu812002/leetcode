class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        vector<int>dp(10001,0);
        vector<int>a(10001,0);
        for(int i=0;i<nums.size();i++)
            a[nums[i]]+=nums[i];
        
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        for(int i=2;i<=10000;i++){
            dp[i]=max(dp[i-1],dp[i-2]+a[i]);
        }
        return dp[10000];
    }
};