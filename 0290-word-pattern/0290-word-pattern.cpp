class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<int,string>mp;
        unordered_map<string,char>mp2;
        string str="";
        int c=0;
        int i=0;
        for(int j=0;j<s.length();j++){
            if(s[j]==' '){
                c++;
                if(mp.find(pattern[i])!=mp.end())
                {
                    if(mp[pattern[i]]!=str)
                        return false;
                }
                else
                mp[pattern[i]]=str;
                
                if(mp2.find(str)!=mp2.end()){
                    if(mp2[str]!=pattern[i])
                        return false;
                }
                else
                    mp2[str]=pattern[i];
                
                
                i++;
                str="";
                
            }
            else
            str+=s[j];
        }
        if(mp.find(pattern[i])!=mp.end())
                {
                    if(mp[pattern[i]]!=str)
                        return false;
                }
        
        if(mp2.find(str)!=mp2.end())
                {
                    if(mp2[str]!=pattern[i])
                        return false;
                }
        
        if(c+1!=pattern.length())
            return false;
        return true;
    }
};