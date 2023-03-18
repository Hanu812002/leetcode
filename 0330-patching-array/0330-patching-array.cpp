class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long miss = 1, added = 0, i = 0;
    while (miss <= n) {
        cout<<miss<<endl;
        if (i < nums.size() && nums[i] <= miss) {
            miss += nums[i++];
        } else {
            // cout<<miss<<endl;
            miss += miss;
            added++;
        }
    }
    return added;

    }
};