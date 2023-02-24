class Solution {
public:
    string reverseWords(string s) {
      string ans="";
        string str="";
        
        for(int i=0;i<s.length();i++){
            if(i>0 && s[i-1]!=' ' && s[i]==' '){
                
                ans=str+' '+ans;
                str="";
                
            }
            else if(s[i]!=' '){
                str+=s[i];
            }
        }
        if(s[s.length()-1]!=' ')
        ans=str+' '+ans;
        
        ans.pop_back();
        return ans;
    }
};