class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size(), total_subsets = 1<<n, sum = 0;
        for(int mask=0;mask<total_subsets;mask++){
            int sub_xor = 0;
            for(int i=0;i<n;i++){
                if(mask & 1<<i) sub_xor ^= nums[i];
            }
            sum += sub_xor;
        }
        return sum;
    
    }
};