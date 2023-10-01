class Solution {
public:
    string r(string s){
        
        int i=0;
        int j=s.length()-1;
        while(j>i){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
    string reverseWords(string s) {
        string str="";
        string ans="";
        for(int i=0;i<s.length();i++){
        
            if(s[i]==' '){
                ans+=r(str);
                ans+=" ";
                str="";
            }
            else{
                str+=s[i];
            }
        }
        ans+=r(str);
        return ans;
    }
};