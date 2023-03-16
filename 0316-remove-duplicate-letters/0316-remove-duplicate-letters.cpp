class Solution {
public:
    string removeDuplicateLetters(string s) {
        int vis[26]={0};
        int c[26]={0};
        for(int i=0;i<s.size();i++){
            c[s[i]-'a']++;
        }

        string str="";

        for(int i=0;i<s.length();i++){
            c[s[i]-'a']--;
            if(!vis[s[i]-'a']){
                while(str.size()>0 && s[i]<str.back() && c[str.back()-'a']){
                    vis[str.back()-'a']=0;
                    str.pop_back();
                }
                str+=s[i];
                vis[s[i]-'a']=1;
            }
        }
        return str;
    }
};