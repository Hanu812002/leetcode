class Solution {
public:
    vector<vector<int>>vec;
    void fun(vector<int>&nums,vector<int>v,int i){
        if(i==nums.size()){
          vec.push_back(v);
            return;
        }
        fun(nums,v,i+1);
        v.push_back(nums[i]);
        fun(nums,v,i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        fun(nums,v,0);
        return vec;
    }
};