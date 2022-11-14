class Solution {
public:
     int helper(int n,int k){
        int ans = 0;
        for(int i=1; i<=n; i++){
            ans = (ans + k) % i;
            // cout<<ans<<endl;
        }
        return ans;
    }
    int findTheWinner(int n, int k) {
        return helper(n,k)+1;   
    }
};