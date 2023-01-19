class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int tmp = 0, res = nums.size(), r = 0;
        
        for (auto num : nums) r= (r + num) % p;
        
        if (r == 0) return 0;
        
        unordered_map<int, int> pre_sum;
        
        pre_sum[0] = -1;
        
        for (int i = 0; i < nums.size(); i++) {
        
            tmp = (tmp + nums[i]) % p;
            
            pre_sum[tmp] = i;
            
            int rest = (tmp - r + p) % p;
            
            if (pre_sum.find(rest) != pre_sum.end()) res = min(res, i - pre_sum[rest]);
            
        }
        return res >= nums.size() ? -1 : res;

    }
};