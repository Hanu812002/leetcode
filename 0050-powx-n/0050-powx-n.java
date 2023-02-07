class Solution {
    public double myPow(double x, int n) {
        
        if(n<0)
            x=1/x;
        if(n==0)
            return 1;
        
        return fun(x,Math.abs(n));
    }
    static double fun(double x,int n){
        if (n == 0) return 1;
        
        double res = fun(x,n/2);
        // if the power is odd
        if (n%2 != 0) return res * res * x;
        else return res * res;
       
    }
}