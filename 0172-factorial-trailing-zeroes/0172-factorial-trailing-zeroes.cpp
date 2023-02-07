class Solution {
public:
    int trailingZeroes(int n) {
           // Write Your Code here
        // int n=N;
        int c=0;
        while(n>0){
            c+=(n/5);
            n=n/5;
        }
        return c; 
    }
};