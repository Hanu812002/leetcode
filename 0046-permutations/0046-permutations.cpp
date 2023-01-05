class Solution {
public:
    vector<vector<int>>ans;
    void fun(int i,vector<int>&nums){
        if(i==nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[j],nums[i]);
        fun(i+1,nums);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        fun(0,nums);
        return ans;
    }
};