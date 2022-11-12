class Solution {
public:
    string str="";
     string fun(string &s,int k,int i){
        if(i==k)
            return str;
        if(s[i]=='0'){
            str+='0';
            str+='1';
        }
        else if(s[i]=='1'){
            str+='1';
            str+='0';
        }
        fun(s,k,i+1);
         return str;
    }
    int kthGrammar(int n, int k) {
        //  string s="0";
        // if(n>=2)
        //     s+='1';
        // for(int i=2;i<n;i++){
        //     str="";
        //     s=fun(s,s.length(),0);
        //     // cout<<s<<endl;
        // }
        // // cout<<s<<endl;
        // return s[k-1]-'0';
        if (n == 1) return 0;
	if (k % 2 == 0) return (kthGrammar(n - 1, k / 2) == 0) ? 1 : 0;
	else return (kthGrammar(n - 1, (k + 1) / 2) == 0) ? 0 : 1;
    }
};