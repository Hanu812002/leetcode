class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c=0;
        long long m=1;
        for(auto &i : nums){
            if(i!=0)
            m=m*i;
            else
            c++;
                
        }
        vector<int>v(nums.size(),0);
        if(c>1)
            return v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0 && c==0)
                nums[i]=m/nums[i];
            
            else if(nums[i]==0 && c==0)
                nums[i]=m;
            else if(c==1)
            {
               if(nums[i]!=0)
                   nums[i]=0;
                else
                    nums[i]=m;
            }
        }
        return nums;
    }
};