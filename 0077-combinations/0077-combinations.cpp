class Solution {
public:
    vector<vector<int>>v;
       void fun(vector<int>a,int n, int k, int i){
           
           if(a.size()==k){
               // cout<<a[0]<<" "<<a[1]<<endl;
               v.push_back(a);
               
               return;
           }
            for(int j=i;j<=n;j++){
                a.push_back(j);
                fun(a,n,k,j+1);
                a.pop_back();
            }
       }
    vector<vector<int>> combine(int n, int k) {
        vector<int>a;
        fun(a,n,k,1);
        return v;    
    }
};