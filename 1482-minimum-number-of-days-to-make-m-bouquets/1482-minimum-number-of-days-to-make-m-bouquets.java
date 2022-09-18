class Solution {
    public int minDays(int[] b, int m, int k) {
     int l=Arrays.stream(b).min().getAsInt();
        int r=Arrays.stream(b).max().getAsInt();
        
        if(m*k > b.length)
            return -1;
        
        while(l<r){
            int mid=l+(r-l)/2;
            if(fun(mid,b,m,k))
                r=mid;
            else
                l=mid+1;
        }
    
        return l;
    }
    private boolean fun(int mid,int[] b,int m,int k){
        int total_flower=0;
        int t_subarr=0;
        for(int i=0;i<b.length;i++){
            if(b[i]<=mid)
                total_flower++;
            else
            {   
                total_flower=0;
            }
            if(total_flower>=k)
            {  t_subarr++;
               total_flower=0;
            }
            
        }
         if(total_flower>=k)
            {  t_subarr++;
               total_flower=0;
            }
           
        if(t_subarr>=m)
            return true;
        
        return false;
            
    }
}