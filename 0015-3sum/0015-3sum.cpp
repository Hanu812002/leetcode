class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>ans;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i-1]==nums[i])
                continue;
            
         int x=i+1;
        int y=nums.size()-1;
         while(x<y){
             int s=nums[i]+nums[x]+nums[y];
             if(s==0)
             {
                 ans.push_back({nums[i],nums[x],nums[y]}); 
                 int a=nums[x];
                 int b=nums[y];
                 while(x<y && nums[x]==a) x++;
                 while(x<y && nums[y]==b) y--;
             }
             else if(s>0)
                 y--;
             else
                 x++;
         }
            
            
        }
        
        return ans;
    }
};