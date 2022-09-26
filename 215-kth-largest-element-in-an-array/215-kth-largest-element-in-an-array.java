class Solution {
    public int findKthLargest(int[] arr, int k) {
         PriorityQueue<Integer>q=new PriorityQueue<Integer>();
       
        for(int i=0;i<arr.length;i++){
            q.add(arr[i]);
            if(i>=k)
            q.poll();
        }
      
       
       return q.peek();
    }
}