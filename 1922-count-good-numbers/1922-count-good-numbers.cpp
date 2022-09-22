class Solution {
public:
    
        
     int mod = 1e9 + 7; 
    int countGoodNumbers(long long n) {
        if(n & 1)
            return powFun(5, (n + 1) / 2) * powFun(4, n / 2) % mod;
        return powFun(5, n / 2) * powFun(4, n / 2) % mod;
    }
    long long powFun(long long x, long long n)
    {
        if(n == 0)
            return 1;
        long long p = powFun(x, n / 2);
        long long ans = p * p % mod;
        if(n & 1) 
            ans = ans * x % mod;
        return ans;
    }
};