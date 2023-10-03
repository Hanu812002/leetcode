class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i : nums)
            mp[i]++;
        int sum=0;
        for(auto i : mp){
            int n=i.second-1;
            sum=sum+(n*(n+1))/2;
        }
        return sum;
    }
};