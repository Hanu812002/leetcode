class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int h[26]={0};
        
       string ans="";
        
        if(strs.size()==1)
            return strs[0];
        
       string s1=strs[0];
    string s2=strs[1];
        
        for(int i=0;i<min(s1.length(),s2.length());i++){
            if(s1[i]!=s2[i])
                break;
            
            ans+=s1[i];
        }
        
       for(int j=2;j<strs.size();j++){
           
           s1=ans;
           s2=strs[j];
           ans="";
            for(int i=0;i<min(s1.length(),s2.length());i++){
            if(s1[i]!=s2[i])
                break;
            
            ans+=s1[i];
        }
       
           
       }
        
        return ans;
    }
};