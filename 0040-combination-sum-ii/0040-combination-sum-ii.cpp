class Solution {
public:
     vector<vector<int>>ans;
    void fun(vector<int>&s,int sum,int i,vector<int>&v){
       // if(i==s.size()){
        if(sum==0)
        {
            ans.push_back(v);
            return ;
        }
            
        // }/
        
        for(int j=i;j<s.size();j++){
             
            if(i<j && s[j]==s[j-1])
	       continue;
	       
	       if(s[j]>sum)
	       break;
            
            v.push_back(s[j]);
            fun(s,sum-s[j],j+1,v);
           v.pop_back();
        }
        
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<int>v;
        sort(candidates.begin(),candidates.end());
        fun(candidates,target,0,v);
        return ans;

    }
};