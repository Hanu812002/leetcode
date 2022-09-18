class Solution {
    public int splitArray(int[] nums, int m) {
       int start = 0; 
    int end = 0;
    
    for(int i = 0 ; i<nums.length ; i++){ 
        start = Math.max(start , nums[i]);  // // Simple Linear Search to Find Max in Array.
        end += nums[i];   // Sum of all the value in Array.
    }
    
    // binary search
    while(start < end){
        int mid = start + (end - start)/2;  // To find mid element.
        
        // Calculating how many pieces array can divide with max sum.
        int sum = 0;
        int pieces = 1;
        for(int num : nums){
            if(sum + num > mid){
                
                sum = num;
                pieces++;
            }
            else{
                sum += num;
            }
        }
        
        if(pieces > m){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    
    return end;   
    }
}