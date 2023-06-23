class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
      int n=nums.size();
        
        if(n<=2)
            return n;
        
        vector<unordered_map<int,int>>mp(n);
        int ans=2;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int diff=nums[i]-nums[j];
                mp[i][diff]=mp[j].count(diff) ? mp[j][diff]+1 :2;
                ans=max(ans,mp[i][diff]);
            }
        }
        return ans;
    }
};