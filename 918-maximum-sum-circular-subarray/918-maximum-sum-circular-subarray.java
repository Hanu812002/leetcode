class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        //Sum of array
        int sum = 0;
        
        //Calculate sum
        for(int i:nums) {
            sum+=i;
        }
        
        int max=nums[0], maxSum=nums[0], min=nums[0], minSum=nums[0];
        
        //Kadane's algo - calculate max subarray sum and min subarray sum - O(n)
        for(int i=1;i<nums.length;++i) {
            
            //Max subarray sum
            max=Math.max(nums[i], nums[i]+max);
            maxSum=Math.max(maxSum, max);
            
            //Min subarray sum
            min=Math.min(nums[i],nums[i]+min);
            minSum=Math.min(minSum, min);
        }
        
        //Return maximum of (sum - min subarray sum) and max subarray sum
        return Math.max(sum==minSum?minSum:sum-minSum, maxSum);
        
    }
}