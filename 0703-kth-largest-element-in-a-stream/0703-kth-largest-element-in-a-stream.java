class KthLargest {
   int k;
    PriorityQueue<Integer> pq=new PriorityQueue<>();
    public KthLargest(int k, int[] nums) {
        this.k=k;
        for(int num:nums){
            if(pq.size()<k){
                pq.add(num);
            }else{
                if(pq.peek()<num){
                    pq.remove();
                    pq.add(num);
                }
            }
        }
    }
    
    public int add(int num) {
        if(pq.size()<k){
            pq.add(num);
        }else{
            if(pq.peek()<num){
                pq.remove();
                pq.add(num);
            }
        }
        return pq.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */