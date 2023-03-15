class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        
       vector<long>v(primes.size());
       vector<long>val(n+1); 
       vector<int>in(primes.size());
        val[0]=1;
      for(int i=0;i<n;i++){
        long mini=INT_MAX;  
          for(int j=0;j<primes.size();j++){
              v[j]=val[in[j]]*primes[j];
            mini=min(mini,v[j]);
              
          }
          
          for(int j=0;j<primes.size();j++){
              
              if(mini==v[j]){
                  val[i+1]=v[j];
                  in[j]++;
              }
          }
          
      }
        return val[n-1];
    }
};