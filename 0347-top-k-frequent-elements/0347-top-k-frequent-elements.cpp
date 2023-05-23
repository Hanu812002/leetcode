class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
   unordered_map<int,int>mp;
     for(auto it:nums){
         mp[it]++;
     }
     vector<int> fq[nums.size()+1];
     int sz = 0;
     for(auto it:mp){
        fq[it.second].push_back(it.first);
         sz = max(it.second,sz);
     }
     vector<int>res;
     for(int i=sz;i>=0 && k;i--){
         if(fq[i].size()){
             for(auto it:fq[i]){res.push_back(it);k--; if(k==0)break;}
         }
     }
     return res;
}
};