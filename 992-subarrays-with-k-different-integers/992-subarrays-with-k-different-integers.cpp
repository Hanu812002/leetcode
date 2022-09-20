class Solution {
public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         unordered_map<int,int>m;
//     int i=0;
//         int j=0;
//         int c=0;
        
//         while(i<nums.size()){
//             m[nums[i]]++;
            
//             if(m.size()==k)
//                 c++;
            
            
//             if(m.size()>k){
//                int s=m.size();
//                 while(m.size()>k){
//                 m[nums[j]]--;
//                     if(m[nums[j]]==0)
//                         m.erase(nums[j]);
//                 j++;
//                 if(m.size()==s )
//                     c++;
//             }
//                  if(m.size()==k)
//                 c++;
            
//         }
           
            
//             i++;
//         }
//         return c;
//     }
     int atmostK(vector<int> &nums,int k){
        
        if(k<=0)return 0;
        unordered_map<int,int> A;
        
        int n=nums.size();
        int i=0,j=0;
        
        int ans=0;
        while(j<n){
            A[nums[j]]++;
            while(A.size()>k){
                A[nums[i]]--;
                if(A[nums[i]]==0)A.erase(nums[i]);
                i++;
            }
            ans+=(j-i+1);
            j++;
            
        }
        return ans;
        
    }
    
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostK(nums,k)-atmostK(nums,k-1);
    }
};