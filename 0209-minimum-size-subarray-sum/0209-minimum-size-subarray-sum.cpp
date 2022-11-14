class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int i=0;
        int j=0;
        int s=0;
        int m=nums.size()+1;
        while(j<nums.size()){
               s+=nums[j];
                j++;    
            while(s>=target){
                m=min(m,j-i);
                s-=nums[i];
                i++;
            }
        }
        return m%(nums.size()+1);
    }
};