class Solution {
public:
    void fun(vector<int>&v,int n){
        // int m=n;
        if(n==1)
            return;
            vector<int>::iterator it;
            it = v.begin();
          for(int i=0;i<n;i+=2){
              v.erase(it+i);
              // m--;
          }
        n=v.size();
        for(int i=n-1;i>=0;i-=2){
              v.erase(it+i);
              // m--;
          }
        fun(v,v.size());
        
    }
    // int lastRemaining(int n) {
    //     vector<int>v;
    //     for(int i=1;i<=n;i++){
    //         v.push_back(i);
    //     }
    //     fun(v,n);
    //     return v[0];
    // }
      int lastRemaining(int n) 
    {
        //Base Case
        if(n == 1)
        {
            return 1;
        }
        else
        {
            return 2 * (1 + n / 2 - lastRemaining(n / 2));
        }
    }
};