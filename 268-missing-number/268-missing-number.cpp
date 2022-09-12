class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xo=nums[0];
        for(int i=1;i<nums.size();i++)
            xo=xo^nums[i];
        
        for(int i=1;i<=nums.size();i++)
            xo=xo^i;
        
        return xo;
    }
};