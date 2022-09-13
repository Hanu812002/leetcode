class Solution {
public:
//     int findMin(vector<int>& nums) {
//         int s=0;
//         int e=nums.size()-1;
//         int n=nums.size();
//         while(s<=e){
        
//             int mid=s+(e-s)/2;
//             int prev=(mid+n-1)%n;
//             int next=(mid+1)%n;
            
//             if(nums[mid]<=nums[prev] && nums[mid]<=nums[next])
//                 return nums[mid];
            
//             if(nums[0]<=nums[mid])
//                 s=mid+1;
//             // else if(nums[e]>=nums[mid])
//             else{
//                 e=mid+1;
//         }
//         }
//         return -1;
//     }
    
     int findMin(vector<int>& nums) {
        
        int n = nums.size();
        
        //if it got rotated n times, so return nums[0] as well
        if(n == 1 || nums[0] < nums[n-1])
        {
            return nums[0];
        }
        
        //we find the rotation point
        int start = 0;
        int end = n-1;
        
        int min_val = INT_MAX;
        
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            
            min_val = min(min_val, nums[mid]);
            
            //found in untouched part or rotated part
            if(nums[start] <= nums[mid] && nums[mid] >= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            
        }
        
        return min_val;
    }
};