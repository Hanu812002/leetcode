class Solution {
public:
     int countSubArrs(vector<int>&nums,int k){
        if(k<0) return 0;
        int c=0,j=0,count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            
            mp[nums[i]]++;
            
            while(mp.size()>k){
                mp[nums[j]]--;
                if(mp[nums[j]]==0)
                mp.erase(nums[j]);
                
                j++;
            }
            
            count+=(i-j+1);  
        }
        return count;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
         return countSubArrs(nums,k)-countSubArrs(nums,k-1);
    }
};