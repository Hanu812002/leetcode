class Solution {
public:
    vector<int>v;
    void fun(int num,int ld,int n,int k){
        if(n==0)
        {  v.push_back(num);
           return ;
        }
        
        
        for(int i=0;i<10;i++){
            if(abs(i-ld)==k)
            {
                fun(num*10+i,i,n-1,k);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<10;i++)
        {
            fun(i,i,n-1,k);
        }
        return v;
    }
};