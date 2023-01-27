class Solution {
public:
     int dp[105];
    int rec(int i, vector<int>&a) {
        if (i >= a.size()) {
            return 0;
        }
        if (dp[i] != -1) return dp[i];
        int op1 = rec(i + 1, a);
        int op2 = a[i] + rec(i + 2, a);
        return dp[i] = max(op1, op2);
    }
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return rec(0, nums);
    }
};