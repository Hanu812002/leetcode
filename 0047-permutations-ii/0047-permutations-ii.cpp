class Solution {
public:
    set<vector<int>>s;
    vector<vector<int>>ans;
    void fun(int i,vector<int>&nums){
        if(i==nums.size()-1)
        {
            s.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[j],nums[i]);
        fun(i+1,nums);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        fun(0,nums);
        for(auto i : s)
            ans.push_back(i);
        return ans;
    }
};