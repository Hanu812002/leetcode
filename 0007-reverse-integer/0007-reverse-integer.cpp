class Solution {
public:
    int reverse(int x) {
       long num=0;
        
                if(x>=INT_MAX || x<=INT_MIN) return 0;  

    bool f=false;
        
        if(x<0)
          {  f=true;
             x=-(x);
          }
        while(x>0){
            int m=x%10;
            num=num*10+m;
            x=x/10;
        }
        
        if(num>INT_MAX || num<INT_MIN) return 0;  

        if(f)
            num=-num;
        
        return (int)num;
    }
};