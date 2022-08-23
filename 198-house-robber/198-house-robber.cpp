class Solution {
public:
    int rob(vector<int>& nums) {
       int a=nums[0];
       int n=nums.size();
        if(n==1)
            return a;
        int b=0;
        for(int i=1;i<n;i++){
            int c=max(a,b+nums[i]);
            b=a;
            a=c;
        }
        return a;
    }
};