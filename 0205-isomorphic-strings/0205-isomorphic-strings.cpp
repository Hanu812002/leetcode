class Solution {
public:
    bool fun(string s,string t){
        
        if(s.length()!=t.length())
            return false;
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<s.length();i++){
            
            if(mp.find(s[i])!=mp.end() && mp[s[i]]!=t[i]){
                return false;
            }
            else
                mp[s[i]]=t[i];
            
        }
        
        return true;
    }
    bool isIsomorphic(string s, string t) {
       return  fun(s,t)&&fun(t,s);
    }
};