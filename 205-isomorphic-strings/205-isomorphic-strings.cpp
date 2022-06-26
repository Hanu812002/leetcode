class Solution {
public:
    bool check(string s,string t){ map<char,char>m;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end())
                m[s[i]]=t[i];
             else{
                 if(m[s[i]]!=t[i])
                     return false;
             } 
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
    return check(s,t)&&check(t,s);
    }     
};