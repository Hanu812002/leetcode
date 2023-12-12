class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=(nums[0]-1)*(nums[1]-1);
         int b=(nums[n-1]-1)*(nums[n-2]-1);
         int c=(nums[0]-1)*(nums[n-1]-1);
        if(n==2)
            return a;
        int d=(a>b?a:b);
        return d>c?d:c;
    }
};