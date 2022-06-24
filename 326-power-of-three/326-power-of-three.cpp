class Solution {
public:
    // bool fun(int n,int a,int i){
    //     if(a==n)
    //         return true;
    //     a=pow(a,i);
    //     fun(n,a,i++);
    //     return false;
    // }
    
    bool isPowerOfThree(int n) {
        long long a=3;
        int i=2;
        if(n==1)
            return true;
        while(a<=n){
            if(a==n)
                return true;
            a=pow(3,i);
            i++;
            // cout<<a<<endl;
        }
        if(a==n)
            return true;
        return false;
    }
};