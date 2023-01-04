class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            int target = 0 - nums[i];

            int front = i + 1;
            int back = n - 1;

            while (front < back) {
                int sum = nums[front] + nums[back];
                
                if (sum < target) 
                    front++;
                else if (sum > target) 
                    back--;
                else {
                    vector<int> temp = {nums[i], nums[front], nums[back]};
                    res.push_back(temp);

                    while (front < back && nums[front] == temp[1]) front++;
                    while (front < back && nums[back] == temp[2]) back--;
                }
            }

            while (i < n-1 && nums[i] == nums[i+1]) i++;
        }

        return res;
    }
};