class Solution {
public:
    double ans=1.0;
    double fun(double x,int n){
        if(n==0)
            return 1;
        
        double res=fun(x,n/2);
        
        if(n%2==0)
            return res*res;
        
        else
            return res*res*x;
    }
    double myPow(double x, int n) {
       if(x==1)
           return 1;
        
        if(n<0)
        {   
            x=1/x; 
        }
        
       return fun(x,abs(n));
        // return ans;
    }
};