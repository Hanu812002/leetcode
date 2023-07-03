class Solution {
public:
    bool buddyStrings(string s, string pal) {
        
        if(s.length()!=pal.length())
            return false;
        
         int c=0;
        int  a=-1,b;
        int h[26]={0};
        int f=0;
        for(int i=0;i<s.length();i++){
            
            if(s[i]!=pal[i]){
                c++;
                if(a==-1)
                    a=i;
                else
                    b=i;
            }
            else{
                h[s[i]-'a']++;
                if(h[s[i]-'a']>=2)
                    f=1;
            }
        }
        
        if(c==2 && pal[a]==s[b] && s[a]==pal[b])
            return true;
        
        
        return f==1&&c==0;
        
    }
};