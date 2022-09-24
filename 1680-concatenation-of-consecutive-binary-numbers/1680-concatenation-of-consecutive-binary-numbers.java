class Solution {
    public int concatenatedBinary(int n) {
        final long m = (long) (1e9 + 7);
        long r = 0;
        int b=0;
        
        for(int i=1;i<=n;i++){
            if((i & (i-1))==0)
                b++;
            
            r=((r<<b)+i)%m;
        }
        return (int)r;
    }
}