class Solution {
public:
    double champagneTower(int p, int n, int q) {
        vector<vector<double>>v(n+2,vector<double>(n+2,0));
        // long long p=w;
        v[0][0]=(p);
        
        for(int i=0;i<n;i++)
        {
             for(int j=0;j<i+1;j++){
                 double a=v[i][j];
               
                 if(a>1){
                       v[i][j]=1;
                     a=a-1;
                     v[i+1][j]+=(a/2.0);
                     v[i+1][j+1]+=(a/2.0);
                 }
             }    
        }
        if(v[n][q]>1)
            return 1;
        
        return v[n][q];
        
        
    }
};