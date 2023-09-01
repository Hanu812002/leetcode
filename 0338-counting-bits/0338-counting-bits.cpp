class Solution {
public:
    int fun(int n)
    {
        int c=0;
        // int i=0;
        while(n>0){
            if(n & 1)
                c++;
            n=n>>1;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
            v.push_back(fun(i));
        }
        return v;
    }
};