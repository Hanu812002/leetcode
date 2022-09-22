class Solution {
public:
     void fun(int i,vector<int>arr,int n,  vector<vector<int>>&v,vector<int>&a)
{
   if(i==n)
   {
       v.push_back(a);
       return;
   }
   a.push_back(arr[i]);
   fun(i+1,arr,n,v,a);
   a.pop_back();
             while (i + 1 < n && arr[i] == arr[i + 1]) i++;

   fun(i+1,arr,n,v,a);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>>v;
        vector<int>a;
        int n=nums.size();
       sort(nums.begin(), nums.end());
       fun(0,nums,n,v,a);
        
       return v;
    }
};