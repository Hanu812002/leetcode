class Solution {
public:
    string removeDuplicateLetters(string s) {
        int c[26]={0};
        int vis[26]={0};
       for(int i=0;i<s.length();i++)
           c[s[i]-'a']++;
       
    string res="";
    for(int i=0;i<s.length();i++){
        c[s[i]-'a']--;
        if(!vis[s[i]-'a']){
            while(res.size()>0 && c[res.back()-'a']>0 && res.back()>s[i])
            {    vis[res.back()-'a']=0;
                res.pop_back();
            }
             res += s[i];
            vis[s[i] - 'a'] = 1;
        }
    }
    return res;
    }
};