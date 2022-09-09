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