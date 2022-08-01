class Solution {
    public long countSubarrays(int[] arr, long k) {
//          long long c=0;
//         if(nums[0]<k)
//             c++;
        
//         for(int i=1;i<nums.size();i++){
            
//             if(nums[i]<k)
//             c++;
            
//             nums[i]=nums[i]+nums[i-1];
//         }
        
//         for(int i=1;i<nums.size();i++){
//             int a=2;
//             for(int j=i;j<nums.size();j++){
//                 if(nums[j]*(a)<k)
//                     c++;
                
//                 cout<<nums[j]<<" "<<a<<endl;
//                 a++;
//                 nums[j]=nums[j]-nums[i-1];
//                 cout<<nums[j]<<" "<<a<<endl;

                
//             }
//         }
//         return c;
   long count = 0;

        long sum = 0;
        int start = 0, end = 0;

        while (end < arr.length) {

            sum += arr[end];
            int length = end - start + 1;
            long score = sum * length;

            while (score >= k && start <= end) {
                sum -= arr[start];
                length -= 1;
                score = sum * length;
                start += 1;
            }

            count += end - start + 1;
            end += 1;
        }

        return count;
    }
}