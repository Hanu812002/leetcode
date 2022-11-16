class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
           sum+=nums[i];
        double ma=sum/double(k);
        int j=0;
        for(int i=k;i<nums.size();i++){
            sum-=nums[j++];
            sum+=nums[i];
            ma=max(ma,sum/double(k));
        }
        return ma;
    }
};