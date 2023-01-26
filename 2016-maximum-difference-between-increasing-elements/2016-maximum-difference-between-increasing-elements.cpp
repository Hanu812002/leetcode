class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff=nums[1]-nums[0];
        int mi=nums[0];
        for(int i=1;i<nums.size();i++){
            diff=max(diff,nums[i]-mi);
            mi=min(mi,nums[i]);
        }
        if(diff<=0 )
            return -1;
        return diff;
    }
};