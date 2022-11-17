class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
      int n=nums.size();
        // if(n<k)
        //     return {-1};
        if(k==0)
        return nums;
        
        vector<int>v;
        for(int i=0;i<k;i++)
            v.push_back(-1);
        long long sum=0;
        int s=2*k+1;
        if(n<s){
            vector<int>vec(n,-1);
            return vec;
        }
        
        for(int i=0;i<s;i++)
            sum+=nums[i];
        
        v.push_back(sum/s);
        int j=0;
        for(int i=s;i<n;i++){
             sum-=nums[j++];
            sum+=nums[i];
            v.push_back(sum/s);
        }   
        
        
           for(int i=0;i<k;i++)
            v.push_back(-1);
            
            
            
            
            return v;
    }
};