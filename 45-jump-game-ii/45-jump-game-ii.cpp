class Solution {
public:
    int jump(vector<int>& nums) {
          int n=nums.size();
        if(n==1)
            return 0;
        int j=1;
        int maxr=nums[0];
        int s=nums[0];
    
            for(int i=1;i<n;i++){
                if(i==n-1)
                    return j;
             maxr=max(maxr,nums[i]+i);
                s--;
            if(s==0){
                j++;
                s=maxr-i;
            }
                
                
            }
    
        return j;
    }
};