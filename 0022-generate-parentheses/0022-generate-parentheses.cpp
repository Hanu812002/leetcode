class Solution {
public:
    vector<string>ans;
    void fun(int n,int o,int c,string s){
        if(s.length()==n*2)
        {
            ans.push_back(s);
            return;
        }
        
        if(o>c && c<n)
            fun(n,o,c+1,s+")");
        
        if(o<n)
        fun(n,o+1,c,s+"(");
        
    }
    vector<string> generateParenthesis(int n) {
        
        fun(n,1,0,"(");
        return ans;
        
    }
};