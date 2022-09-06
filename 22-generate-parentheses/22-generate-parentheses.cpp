class Solution {
public:
    void fun(vector<string>&a,int o,int c,int n,string str){
        
        if(str.length()==n*2)
        {
            a.push_back(str);
            str="";
        }
        
        if(o<n)
            fun(a,o+1,c,n,str+"(");
        if(c<o)
            fun(a,o,c+1,n,str+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string>a;
        fun(a,0,0,n,"");
        return a;
    }
};