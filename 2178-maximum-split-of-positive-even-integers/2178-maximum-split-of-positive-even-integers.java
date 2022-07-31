class Solution {
    public List<Long> maximumEvenSplit(long finalSum) {
         if (finalSum % 2 != 0) return new ArrayList<>() ;
        
        List<Long> result = new ArrayList<>() ;
        long sum = 0, nextNum = 2 ;
        
        while (true) {
            if (sum + nextNum <= finalSum) {
                result.add(nextNum) ;
                sum += nextNum ;
            }
            else break ;
            
            nextNum += 2 ;
        }
        
        if (sum == finalSum) return result ;
        
        sum -= result.get(result.size()-1) ;
        result.remove(result.size()-1) ;
        result.add(finalSum-sum) ;
        return result ;
    }
}