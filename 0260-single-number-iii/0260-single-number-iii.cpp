class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int firstXorSec = 0, mask = 1, first = 0;
	
        
	for (auto &num: nums) firstXorSec ^= num;
        
        long long xo=firstXorSec;
        
        xo &=-xo;
        

	for (auto &num: nums)
		if (num & xo) first ^= num;

        
	return {first, firstXorSec ^ first};
    }
};