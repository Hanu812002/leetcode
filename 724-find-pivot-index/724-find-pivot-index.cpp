class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int l=0;
        int s=0;
        for(int i=0;i<nums.size();i++)
        s+=nums[i];
        
        for(int i=0;i<nums.size();i++){
            if(l==(s-l-nums[i]))
                return i;
            else
                l+=nums[i];
        }
        return -1;
    
    }
};