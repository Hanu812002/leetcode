class Solution {
public:
    vector<vector<int>> ans; 
  // set<vector<int>>s;
    void solve(int i, vector<int>& arr, vector<int>& temp, int target)
    {
        if(target == 0) 
        {
            ans.push_back(temp); 
            return; 
        }
        
        if(i==arr.size())
            return;
        
        if(target < 0)
            return;
        
        solve(i+1,arr,temp,target);
        
        temp.push_back(arr[i]); 
        solve(i, arr, temp, target - arr[i]); 
        temp.pop_back();
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        ans.clear();
        vector<int> temp; 
        solve(0, arr, temp, target);
        return ans; 
    }
};