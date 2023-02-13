class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
          sort(nums.begin(),nums.end());
        
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            
            
         int x=i+1;
        int y=nums.size()-1;
         while(x<y){
             int s=nums[i]+nums[x]+nums[y];
              
             if(abs(s-target)<=abs(ans-target))
                     ans=s;
                 
             if(s>target)
                 y--;
             else{
                 
                 x++;
         }
            }
            
        }
        
        return ans;
    } 
    
};