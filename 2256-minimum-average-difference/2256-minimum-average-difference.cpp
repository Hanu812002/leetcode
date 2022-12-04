class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long s=0;
        for(auto i : nums)
            s+=i;
        int n=nums.size();
        long long m=s/n;
        int index=n-1;
        long long sum=0;
        
        for(int i=n-1;i>0;i--){
            
            sum+=nums[i];
            s-=nums[i];
            
            int d=abs(sum/(n-i) - s/(i) );
            // cout<<d<<"       "<<i-1<<endl;
            if(d<=m){
                m=d;
              index=i-1;
            }
            
        }
        return index;
    }
};