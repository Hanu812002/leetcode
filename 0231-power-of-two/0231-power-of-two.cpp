class Solution {
public:
    // https://icts-for-indigenous-languages.hackerearth.com/
    int fun(int n)
    {
        int c=0;
        // int i=0;
        while(n>0){
            if(n&1)
                c++;
            n=n>>1;
        }
        return c;
    }
    bool isPowerOfTwo(int n) {
        if(fun(n)==1)
            return true;
        return false;
    }
};