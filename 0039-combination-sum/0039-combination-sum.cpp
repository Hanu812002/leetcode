class Solution {
public:
    vector<vector<int>>vec;
     void fun(vector<int>&nums,vector<int>v,int i,int sum){
        if(i==nums.size()){
          if(sum==0)
          vec.push_back(v);
            return;
        }
        fun(nums,v,i+1,sum);
        if(sum>=nums[i]){ 
        sum-=nums[i];
        v.push_back(nums[i]);
        fun(nums,v,i,sum);
        }
    }
   
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        fun(candidates,v,0,target);
        return vec;
    }
};