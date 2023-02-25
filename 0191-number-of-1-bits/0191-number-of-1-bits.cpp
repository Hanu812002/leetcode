class Solution {
public:
    int hammingWeight(uint32_t n) {
     int m=0;
        for (int i = 0; i < 32; i++, n >>= 1) {
            if(n&1)
                m++;
    }
        
        return m;
    }
};