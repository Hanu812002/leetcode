class Solution {
public:
    vector<vector<int>>ans;
    void fun(vector<int>&s,int sum,int i,vector<int>&v){
       if(i==s.size()){
        if(sum==0)
        {
            ans.push_back(v);
        }
            return ;
        }
        
        if(s[i]<=sum){
            v.push_back(s[i]);
            fun(s,sum-s[i],i,v);
           v.pop_back();
        }
        
        fun(s,sum,i+1,v);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        fun(candidates,target,0,v);
        return ans;
    }
};