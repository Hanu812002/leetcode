class Solution {
public:
    double fun(double x, int n){
        if(n==0)
            return 1;
        
        double res=fun(x,n/2);
        
        if(n%2!=0)
            return res*res*x;
        
        else
            return res*res;
    }
    double myPow(double x, int n) {
       
        if(n<0)
            x=1/x;
        
       else if(n==0)
           return 1;
        
        return fun(x,abs(n));
    }
};