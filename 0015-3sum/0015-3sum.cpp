class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         
    vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
     // for(int k=0;k<nums.size();k++){
        int k=0;
        
        for(int k=0;k<nums.size();k++){
             if(k>0 && nums[k]==nums[k-1])
               continue;
   
        int i=k+1;
        int j=nums.size()-1;
        
        while(i<j){
            
             
         
             // cout<<k<<i<<j<<endl;
            if(nums[i]+nums[j]+nums[k]==0){
                // cout<<i<<j<<endl;
                ans.push_back({nums[k],nums[i],nums[j]});
                int a=nums[i];
                int b=nums[j];
                 while(i<j && nums[i]==a) i++;
                 while(i<j && nums[j]==b) j--;
                // j--;
                
                // cout<<i<<j<<endl;
            }
            else if(nums[i]+nums[j]+nums[k]>0){
                j--;
            } 
            else
                i++;
        }
         
       
         
     }
        
        return ans;
        
        
    }
};