class Solution {
public:
    int bulbSwitch(int n) {
//          if(n==0)
//              return 0;
        
//         vector<long long>v(n+1,0);
        
//         v[0]=0;
//         for(long long i=2;i<=n;i++){
//             for(long long j=i;j<=n;j+=i){
//                 v[j]++;
//             }
//         }
        
//         long long ans=1;
        
//         for(int i=2;i<=n;i++){
//             if(v[i]%2==0)
//                 ans++;
//         }
//         return ans;
        return sqrt(n);
    }
};