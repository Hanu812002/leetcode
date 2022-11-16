class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      int c=0;
      //   for(int i=0;i<nums.size();i++){
      //     long long mul=1;
      //     for(int j=i;j<nums.size();j++){
      //         mul=mul*nums[j];
      //       // cout<<mul<<" ";
      //     if(mul<k)
      //         c++;
      // } 
      //   }
      //   return c;
        
        if(k<=1)
            return 0;
        int i=0;
        int j=0;
        int p=1;
        while(i<nums.size()){
            p*=nums[i];
            while(p>=k)
                p=p/nums[j++];
            
            c+=1+(i-j);
            i++;
        }
        
       return c; 
    }
};