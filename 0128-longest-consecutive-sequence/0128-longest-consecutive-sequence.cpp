class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        if(nums.size()==0)
            return 0;
        for(auto i : nums){
            mp[i]=1;
        }
        for(auto i :nums){
            if(mp.find(i-1)!=mp.end())
                mp[i]=0;
        }
        
        int ans=-1;
        
        for(auto i : nums){
            if(mp[i]==1){
                int len=1;
                while(mp.find(i+len)!=mp.end())
                {
                    len++;
                }
                ans=max(ans,len);
            }
        }
        
        return ans;
    }
};