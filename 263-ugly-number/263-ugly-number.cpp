class Solution {
public:
    bool isUgly(int n) {
//        while(n!=1){
//            // if(n==1)
//            //     break;
//            if(n%2==0)
//                n=n/2;
//            if(n%3==0)
//                n=n/3;
//            if(n%5==0)
//                n=n/5;
           
//            cout<<n<<endl;

           
//            cout<<n%2<<endl;
//            if(n%2!=0 ||n%3!=0 ||n%5!=0)
//                return false;
//        }
//         return true;
       if( n == 0) return false;
        while(n%2 == 0) n /= 2;
        while(n%3 == 0) n /= 3;
        while(n%5 == 0) n /= 5;
        return n == 1;
    }
};