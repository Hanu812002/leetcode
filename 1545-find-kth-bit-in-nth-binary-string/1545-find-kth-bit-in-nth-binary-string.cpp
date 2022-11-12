class Solution {
public:
    void fun(string &s,int k){
        if(k==0)
            return;
        if(s[k-1]=='0')
            s+='1';
        else if(s[k-1]=='1')
            s+='0';
        fun(s,k-1);
    }
    char findKthBit(int n, int k) {
        string s="0";
        for(int i=1;i<n;i++){
            s=s+'1';
            fun(s,s.length()-1);
            // cout<<s<<endl;
        }
        return s[k-1];
    }
};