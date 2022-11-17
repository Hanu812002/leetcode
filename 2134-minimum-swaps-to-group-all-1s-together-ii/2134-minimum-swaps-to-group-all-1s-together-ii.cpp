class Solution {
public:
    int minSwaps(vector<int>& num) {
        int o=0;
        for(auto i : num){
            if(i==1)
                o++;
        }
        
        if(o==num.size())return 0;
        vector<int>nums;
        nums.insert(nums.end(),num.begin(),num.end());
        nums.insert(nums.end(),num.begin(),num.end());
        
         int z=0;
        int ans;
            for(int i=0;i<o;i++)
        {
            if(nums[i]==0)
                z++;
        }
        ans=z;
        for(int i=o;i<nums.size();i++)
        {
            if(nums[i-o]==0)
                z--;
            if(nums[i]==0)
                z++;
            ans=min(z,ans);
        }
        return ans;
    }
};