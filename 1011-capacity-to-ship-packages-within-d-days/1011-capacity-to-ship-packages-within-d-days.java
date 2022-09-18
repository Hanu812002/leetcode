class Solution {
    public int shipWithinDays(int[] w, int days) {
      int l=0;
        int s=0;
       for(int wt : w){
            // l = Math.max(l , wt);
            s += wt;
        }  
       int r=s; 
       int ans=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            
            if(fun(w,m,days))
            {
                ans=m;
                r=m-1;
            }
            else
                l=m+1;
            
            System.out.println(m + "  " + ans);
        }
    return ans;    
    }
    private boolean fun(int[] w,int m,int d){
        
        int s=0;
        int dd=1;
        for(int i=0;i<w.length;i++){
            
            if(s+w[i] <= m)
                s+=w[i];
            else{
                dd++;
                if(dd>d || w[i]>m)
                    return false;
                s=0;
                s+=w[i];
            }
        }
        return true;
    }
    
}