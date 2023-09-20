class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
      
        long long sum=0;
        for(auto i : nums)
            sum+=i;
        
        if(sum<x)
            return -1;
        
        if(sum==x)
            return nums.size();
        
        long long s=sum-x;
        int f=0;
        int i=0;
        int j=0;
        long long a=0;
        while(i<nums.size()){
            
            if(a<s)
            a+=nums[i++];
            
            while(a>s)
            {
                a-=nums[j++];
            }
            // cout<<a<<s<<endl;
            if(a==s)
            {
                f=max(f,i-j);
                a-=nums[j++];
                // break;
            }
        }
        // cout<<f<<endl;
        if(f==0)
            return -1;
        
        else
            return nums.size()-f;
    }
};