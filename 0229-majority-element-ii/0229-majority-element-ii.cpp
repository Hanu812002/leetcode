class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     map <int,int> mp;
        vector <int> v;
        for(int i:nums) mp[i]++;
        for(auto &it:mp){
            if((it.second)>(nums.size()/3))
                v.push_back(it.first);
        }
        return v;   
    }
};