class Solution {
public:
    int fun(vector<int>nums,int l,int r){
        int s=0;
        int c=0;
        for(int i=l;i<=r;i++){
            int p =max(c,s+nums[i]);
             s=c;
            c=p;
        }
        return c;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        
        return max(fun(nums,0,n-2),fun(nums,1,n-1));
    }
};