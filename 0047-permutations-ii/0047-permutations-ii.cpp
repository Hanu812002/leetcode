class Solution {
public:
 vector<vector<int>>ans;
    void fun(vector<int>v,int i){
        if(i==v.size()){
            ans.push_back(v);
            return;
        }
        
        
        for(int j=i;j<v.size();j++){
             if(i!=j && v[j]==v[i])
	       continue;
            
            swap(v[i],v[j]);
            fun(v,i+1);
            // swap(v[i],v[j]);
        }
        return ;
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
  sort(nums.begin(),nums.end());
        fun(nums,0);
        return ans; 
    }
};