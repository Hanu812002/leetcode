class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
//         vector<vector<int>>ans;
        
//         unordered_map<int,int>mp;
        
//         for(auto i : nums)
//             mp[i]++;
        
//          while(mp.size()>0){
             
//              vector<int>v;
             
//              for(auto i : mp){
//                  int a=i.first;
//                  v.push_back(a);
//                  mp[a]=i.second-1;
//                  if(mp[a]==0)
//                      mp.erase(a);
//              }
//              if(v.size()!=0)
//              ans.push_back(v);
//          }
//         return ans;
         vector<vector<int>> v;
        unordered_map<int, int> m;  
        for (int i = 0; i < nums.size(); i++) m[nums[i]]++;
        int mx=0;
        for(auto k:m) mx=max(mx,k.second);
    
        for(int i=0;i<mx;i++){
            vector<int>vv;
            for(auto k:m){
               if(k.second!=0){
                    vv.push_back(k.first);
                    m[k.first] = k.second - 1;
               }
            }
            if(vv.size()!=0) v.push_back(vv);
        }
        return v;
    }
};