class Solution {
public:
    int nthUglyNumber(int n) {
       int a=0,b=0,c=0;
        
       vector<int>v(n,1);
    
      for(int i=1;i<n;i++){
          v[i]=min(v[a]*2,min(v[b]*3,v[c]*5));
          
          if(v[i]==v[a]*2)
              a++;
          
          if(v[i]==v[b]*3)
              b++;
          
          if(v[i]==v[c]*5)
              c++;
          
      }
        return v[n-1];
    }
};