class Solution {
public:
    int maximum69Number (int num) {
        int c=1;
        int n=1;
        int m=num;
         while(m>0){
             int l=m%10;
             m=m/10;
             if(l==6){
                 c=n;
             }
             n++;
         }
     // cout<<c<<endl;
         if(c==1 && num%10==9)
             return num;              
         m=0;

        m=pow(10,c-1);
        cout<<m<<endl;
        m=m*3;
        
        
        return m+num;
    }
};