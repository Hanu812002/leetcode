class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int lS = 1;             //minimum speed
        int hS = 0;           //maximum speed
        for(int bananas : piles){
            hS = Math.max(hS , bananas);
        }
        
        while(lS < hS){
            int midS = (lS + hS) / 2; // middle speed
            int hours = 0;
            for(int val : piles){
               hours += (val + midS - 1) / midS; 
            }
            
            if(hours > h){
                lS = midS + 1;
            }
            else{
                hS = midS;
            }
        }
        
        return lS;
    }
}