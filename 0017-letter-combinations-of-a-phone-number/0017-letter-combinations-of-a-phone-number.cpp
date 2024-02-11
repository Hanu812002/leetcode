class Solution {
public:
    void fun(vector<string>&ans,string digit,int a,vector<vector<char>>&vec,string s){
        
        if(digit.length()==a)
        {
            if(s!="")
                ans.push_back(s);
            
            return ;
        }
        
        int t=digit[a]-'0';
        
        for(int i=0;i<vec[t].size();i++){
            s.push_back(vec[t][i]);
            fun(ans,digit,a+1,vec,s);
            s.pop_back();
        }
        
        
        
    }
    vector<string> letterCombinations(string digits) {
        
        vector<vector<char>>vec{{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
        
        vector<string>ans;
        
        fun(ans,digits,0,vec,"");
        
        return ans;
    }
};