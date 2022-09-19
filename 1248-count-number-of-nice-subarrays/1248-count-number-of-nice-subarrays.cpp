class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
          int size=nums.size(),i=0,j=0;
        for(auto &it:nums){
            if((it & 1)==0)
                it=0;
            else           //Replacing all the even nos. with 0 & odd nos. with 1 
                it=1;
        }
       //Now simply to get the ans we have to return the no of subarrays with sum = k
        unordered_map<int,int> mp;
        int prefixSum=0,ans=0;
        for(auto it:nums){
            prefixSum+=it;
            if(prefixSum==k)
                ans++;
            if(mp.find(prefixSum-k)!=mp.end())
                ans+=mp[prefixSum-k];
            mp[prefixSum]++;
        }
        return ans;
    }
};