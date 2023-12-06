class Solution {
public:
    int totalMoney(int n) {
       int ans=0;
        
        int i=0;
        while(true){
            if(n>=7){
                int a=(7+i)*(7+i+1)/2;
                int b=i*(i+1)/2;
                
                ans+=(a-b);
                n=n-7;
                // ans-=i;
                i++;
            }
            else{
                int a=(n+i)*(n+i+1)/2;
                int b=i*(i+1)/2;
                
                ans+=(a-b);
                break;
            }
        }
        return ans;
    }
};