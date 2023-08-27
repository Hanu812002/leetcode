// class Solution {
// public:
//     int f=0;
//     void fun(vector<int>&s,int k,int j,vector<int>dp,unordered_map<int,int>&mp){
//         cout<<j<<endl;
//         if(j==s[s.size()-1]){
//             f=1;
//             return;
//         }
//         // if(dp[j]==1)
//         //     return;
        
// //         // int nx=j;
// //         bool a=false;
// //         bool b=false;
// //         bool c=false;
        
//         if(mp.find(j+k)!=mp.end()){
//             dp[j+k]=1;
//             mp.erase(j+k);
//          fun(s,k,k+j,dp,mp);
//         }
//         if(mp.find(j+k+1)!=mp.end()){
//             dp[j+1+k]=1;
//              mp.erase(j+k+1);
//         fun(s,k+1,j+1+k,dp,mp);
//         }
//         if(mp.find(j+k-1)!=mp.end()){
//             dp[j+k-1]=1;
//              mp.erase(j+k-1);
//        fun(s,k-1,j+k-1,dp,mp);
//         }
//         else
//             return;
//         // return a||b||c;
//     }
//     bool canCross(vector<int>& stones) {
//         int n=stones[stones.size()-1];
//         vector<int>dp(n+1,0);
//         unordered_map<int,int>mp;
//         for(auto i: stones)
//             mp[i]++;
//         // dp[stones[0]]=1;
//         f=0;
//         if(mp.find(stones[0]+1)==mp.end())
//             return 0;
        
//          fun(stones,1,stones[0]+1,dp,mp);
//         return f;
//     }
// };
class Solution {
public:
    unordered_map<int, int> m;
    int dp[2000][2000];

    int solve(int i, int k, vector<int>& stones) {
        if (i == stones.size() - 1) {
            return true;
        }
        
        if (dp[i][k] != -1) {
            return dp[i][k];
        }

        bool k0 = false;
        bool kp = false;
        bool k1 = false;

        if (m.find(stones[i] + k) != m.end()) {
            k0 = solve(m[stones[i] + k], k, stones);
        }
        if (k > 1 && m.find(stones[i] + k - 1) != m.end()) {
            kp = solve(m[stones[i] + k - 1], k - 1, stones);
        }
        if (m.find(stones[i] + k + 1) != m.end()) {
            k1 = solve(m[stones[i] + k + 1], k + 1, stones);
        }

        dp[i][k] = k0 || kp || k1;
        return dp[i][k];
    }

    bool canCross(vector<int>& stones) {
        if (stones[1] - stones[0] != 1) {
            return false;
        }

        for (int i = 0; i < stones.size(); i++) {
            m[stones[i]] = i;
        }
        
        memset(dp, -1, sizeof(dp));

        return solve(1, 1, stones);
    }
};
