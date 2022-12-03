class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int N=bills.size();
         int a=0;
        int b=0;
        for(int i=0;i<N;i++){
            if(bills[i]==5)
             a++;
            else if(bills[i]==10)
             b++;
             
            
            if(bills[i]==10){
                if(a>0)
                 a--;
                else
                return false;
            }
            else if(bills[i]==20){
                int s=0;
                if(b>0)
                 {
                     s+=10;
                     b--;
                 }
                 if(s==10 && a>0){
                     a--;
                 }
                 else if(s==0 && a-3>=0){
                     a-=3;
                 }
                 else
                 return false;
            }
        }
        return true;
    }
};