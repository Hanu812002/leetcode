class Solution {
    public int numSubarraysWithSum(int[] nums, int goal) {
      HashMap<Integer,Integer> hashMap = new HashMap();
        hashMap.put(0 , 1);
        int sum = 0;
        int count = 0;
        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i];
            if(hashMap.containsKey(sum-goal))
                count+=hashMap.get(sum-goal);
            hashMap.put(sum , hashMap.getOrDefault(sum,0)+1);
        }
        return count;
    }
}