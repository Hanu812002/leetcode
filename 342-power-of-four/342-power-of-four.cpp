class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n==1)
            return true;
        if(n==0)
            return false;
        if(n%4!=0)
            return false;
       return isPowerOfFour(n/4);
        // return true;
        //  def isPowerOfThree(self, n: int) -> bool:
        // while(n%3==0 and n>0):
        //     n = n/3
        // return n==1
    }
};