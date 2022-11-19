class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp.insert({0,1});
        int sum=0,res=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
        
            sum+=nums[i];
            res=sum%k;
            if(res<0)
                res+=k;
           
            if(mp.find(res)!=mp.end()){
                c+=mp[res];
                mp[res]++;
            }
            else
                mp[res]=1;
            
        }
        return c;
    }
};