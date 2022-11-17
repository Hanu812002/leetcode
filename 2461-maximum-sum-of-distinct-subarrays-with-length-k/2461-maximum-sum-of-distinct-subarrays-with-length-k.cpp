class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
//         long long m=0;
//         long long ma=0;
//         int h[100001]={0};
//         for(int i=0;i<k;i++)
//         {
//             h[nums[i]]++;
//             ma+=nums[i];
            
//         }
//         for(int i=0;i<k;i++){
//             if(h[nums[i]]==1)
//                 m+=nums[i];
//             else{
        
//                 m=0;
//                 break;
//             }
//         }
        
//         for(int i=k;i<nums.size();i++){
//             h[nums[i-k]]--;
//             h[nums[i]]++;
//             int f=0;
            
            
//              for(int j=i-k;j<=i;j++){
//               if(h[nums[j]]>1)
//               f=1;
//               }
//                         cout<<ma<<endl;

//             ma-=nums[i-k];
//             ma+=nums[i];
//             cout<<ma<<endl;
//             if(f==0)
//             m=max(m,ma);
            
            
//         }
//         return m;
        long long ans = 0, sum = 0;
        unordered_map<int, int> mp;
        int i = 0;
        while(i < k  && i < nums.size()){ 
            mp[nums[i]]++;
            sum += nums[i];
            i++;
        }
        if(mp.size() == k) ans = sum; 
        while(i < nums.size()){
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            if(mp[nums[i-k]] == 0) mp.erase(nums[i-k]);
            
            sum += nums[i];
            sum -= nums[i-k];
            if(mp.size() == k) ans = max(ans, sum);
            i++;
        }
        return ans;
    }
};