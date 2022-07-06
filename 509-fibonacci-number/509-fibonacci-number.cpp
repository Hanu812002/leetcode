class Solution {
public:
    int fib(int n) {
        int a=0;
        if(n==0)
            return 0;
        int b=1;
       for(int i=1;i<n;i++){
           int c=a+b;
            a=b;
           b=c;
       } 
        return b;
    }
};