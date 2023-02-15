class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int sign=((dividend>0)^(divisor>0))?-1:1;
        
        
       long long a=labs(dividend);
      long long b=labs(divisor);
//         int c=0;
        
//         while(dividend>=divisor){
//             dividend-=divisor;
//             c++;
//         }
//         return c*sign;
        
        long long t=0;
        long long q=0;
        
        for(int i=31;i>=0;i--){
            
            
            if((t+(b<<i))<=a){
                t+=(b<<i);
                q+=(1<<i);
            }
            
        }
        
        return q*sign;
    }
};