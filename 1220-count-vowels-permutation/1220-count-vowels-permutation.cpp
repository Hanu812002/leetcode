class Solution {
public:
    int countVowelPermutation(int n) {
    long a=1,e=1,i=1,o=1,u=1;
    long mod=pow(10,9)+7;
    for(int j=2;j<=n;j++){
        int a2=(e+i+u)%mod;
        int e2=(a+i)%mod;
        int i2=(e+o)%mod;
        int o2=i%mod;
        int u2=(i+o)%mod;
        
        a=a2;
        e=e2;
        i=i2;
        o=o2;
        u=u2;
    }
      // cout<<a<<i<<o<<e<<u<<endl;
        
        return (a + e + i + o + u)%mod;
    
    }
};