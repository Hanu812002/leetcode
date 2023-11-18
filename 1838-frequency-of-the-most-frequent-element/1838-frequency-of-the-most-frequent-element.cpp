class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
          long long l=0, r=0, res=0;
        long long t=0;
        while(r<nums.size()){
            t+=nums[r];
            while(nums[r]*(r-l+1)>t+k){
                t-=nums[l];
                l+=1;
                
            }
            res=max(res,r-l+1);
            r+=1;
            
        }
        return res;
    }
};

// class Solution {
// public:
//     int maxFrequency(vector<int>& nums, int k) {
//        sort(nums.begin(),nums.end());
        
       
//         int ans=0;
        
//         for(int i=nums.size()-1;i>=0;i--){
//             int a=k;
//             int c=1;            
//             for(int j=i-1;j>=0;j--){
//                 if(nums[i]-nums[j]<=a)
//                 {
//                     c++;
//                     a-=(nums[i]-nums[j]);
//                 }
//                 else
//                     break;
//             }
//             ans=max(ans,c);
//         }
//         return ans;
//     }
// };