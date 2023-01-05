class Solution {
public:
   vector<vector<int>> ans; 
  // set<vector<int>>s;
    void solve(int in, vector<int>& arr, vector<int>& temp, int target)
    {
        if(target == 0) 
        {
            ans.push_back(temp); 
            return; 
        }
        
        for(int i=in;i<arr.size();i++){
        
        if(target < 0)
            return;
        
        if(i>in && arr[i]==arr[i-1])
            continue;
            
        temp.push_back(arr[i]); 
        solve(i+1, arr, temp, target - arr[i]); 
        temp.pop_back();
        
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        ans.clear();
        vector<int> temp; 
        sort(arr.begin(),arr.end());
        solve(0, arr, temp, target);
     
        return ans; 
    }
};