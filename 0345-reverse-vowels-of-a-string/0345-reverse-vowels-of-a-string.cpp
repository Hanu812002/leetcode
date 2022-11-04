class Solution {
public:
    string reverseVowels(string s) {
     string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='u'||s[i]=='o'||s[i]=='i'||s[i]=='e'||s[i]=='I'||s[i]=='U'||s[i]=='O'||s[i]=='E'||s[i]=='A'){
                str+=s[i];
            }
        } 
            int j=0;
            reverse(str.begin(),str.end());
             for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='u'||s[i]=='o'||s[i]=='i'||s[i]=='e'||s[i]=='I'||s[i]=='U'||s[i]=='O'||s[i]=='E'||s[i]=='A'){
                s[i]=str[j];
                j++;
            }
        }  
        return s;
    }
};