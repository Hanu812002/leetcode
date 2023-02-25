class Solution {
public:
    int countPrimes(int n) {
        
        if(n==0 ||n==1)
            return 0;
        
        vector<int>v(n,0);
        
        v[0]=1;
        v[1]=1;
        for(int i=2;i<=sqrt(n);i++){
            // int k=2;
            if(v[i]==0){
                for(int j=i*2;j<n;j=j+i)
                {
                    v[j]=1;
                    
                }
            }
        }
        
        int c=0;
        for(int i=2;i<n;i++){
            if(v[i]==0)
            {
                c++;
            }
        }
        
        return c;
    }
};