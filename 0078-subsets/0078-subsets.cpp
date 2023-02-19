class Solution {
public:
    vector<vector<int>>v;
       void fun(vector<int>a,vector<int>&nums, int i){
           
           if(i==nums.size()){
               v.push_back(a);
               return;
           }
            
                a.push_back(nums[i]);
                fun(a,nums,i+1);
                a.pop_back();
                fun(a,nums,i+1);
            
       }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>a;
        fun(a,nums,0);
        return v;    
    }
};