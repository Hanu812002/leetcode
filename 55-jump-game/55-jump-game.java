class Solution {
    public boolean canJump(int[] nums) {
        int n=nums.length;
        int cur=0;
        if(n==1)
            return true;
        if(nums[0]==0)
            return false;
        else{
            for(int i=0;i<n-1;i++){
                if(cur<i)
                    break;
                int ir=i+nums[i];
                if(ir>cur)
                    cur=ir;
                
            }
        }
        return (cur>=n-1);
    }
}