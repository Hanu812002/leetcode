class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, 1);
        sort(nums.begin(),nums.end());
        vector<int>hash(n,1);
        for(int i=0; i<n; i++){
            hash[i]=i;
            for(int j=0; j<i; j++){
                if(nums[i]%nums[j]==0 && dp[i]<dp[j]+1) {
                    hash[i]=j;
                    dp[i] = dp[j]+1 ;
                }
            }
        }
    
    
    
    int lasti=-1;
    int ans=-1;
    for(int i=0;i<n;i++){
        if(ans<dp[i]){
            ans=dp[i];
            lasti=i;
        }
    }
    
    
    
        vector<int>v;
        v.push_back(nums[lasti]);
        
        while(hash[lasti]!=lasti){
            lasti=hash[lasti];
            v.push_back(nums[lasti]);
        }
        
    reverse(v.begin(),v.end());
    return v;
    }
};