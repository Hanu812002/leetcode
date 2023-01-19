class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
         unordered_map<long long,long long>m;
        long long n=nums.size();
        long long total=n*(n-1)/2;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]-i]++;
        }
        unsigned long long count=0;
        for(auto it:m)
        {
            if(it.second>1)
            {
                count+=((it.second * (it.second-1)) / 2);
            }
        }
        return total-count;

    }
};