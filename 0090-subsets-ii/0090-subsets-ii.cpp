class Solution {
public:
   void fun(int i,vector<int>arr,int n,  vector<vector<int>>&v,vector<int>&a)
{
   v.push_back(a);
       

       
       for(int j=i;j<arr.size();j++){
           if(i!=j && arr[j]==arr[j-1])
               continue;
           
   a.push_back(arr[j]);
   fun(j+1,arr,n,v,a);
   a.pop_back();
   }
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