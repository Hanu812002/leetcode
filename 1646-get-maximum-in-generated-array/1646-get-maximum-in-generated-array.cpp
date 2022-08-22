class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> nums(n+1);
	int maxNum = 0;

	for (int i = 0; i <= n; ++i) {
		if (i < 2) {
			nums[i] = i;
		} else if (i % 2) {
			nums[i] = nums[i/2] + nums[i/2 + 1];
		} else {
			nums[i] = nums[i/2];
		}
		maxNum = max(maxNum, nums[i]);
	}   
	return maxNum;
    }
};