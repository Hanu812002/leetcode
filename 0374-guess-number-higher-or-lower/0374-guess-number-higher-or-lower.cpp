/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
      long long i=0;
        while(true){
            long long m=(i+n)/2;
            if(guess(m)==0)
                return m;
            else if(guess(m)==-1)
                n=m-1;
            else
                i=m+1;
        }
        return 0;
    }
};