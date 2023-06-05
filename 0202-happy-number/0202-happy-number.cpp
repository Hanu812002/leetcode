class Solution {
public:
   int sum(int n){
        int s=0;
        while(n>0){
            int l=n%10;
            n=n/10;
            s+=l*l;
        }
        return s;
    }
    bool isHappy(int n) {
        while(1){
            int s=sum(n);
            if(s==1)
                return true;
            else if(s==n || s==4)
                return false;
            else
                n=s;
                
        }
        return false;
    }
};

// int digitSquareSum(int n) {
//     int sum = 0, tmp;
//     while (n) {
//         tmp = n % 10;
//         sum += tmp * tmp;
//         n /= 10;
//     }
//     return sum;
// }

// bool isHappy(int n) {
//     int slow, fast;
//     slow = fast = n;
//     do {
//         slow = digitSquareSum(slow);
//         fast = digitSquareSum(fast);
//         fast = digitSquareSum(fast);
//     } while(slow != fast);
//     if (slow == 1) return 1;
//     else return 0;
// }
