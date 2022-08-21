class Solution {
public:
    bool check(string& s,string& s1,int i){
        if(i>=s.size()) return true;
        if(i+s1.size()>s.size()) return false;
        if(s.substr(i,s1.size())==s1) return check(s,s1,i+s1.size());
        else return false;
    }
    bool repeatedSubstringPattern(string s) {
       bool ans=false;
       for(int i=1;i<=s.size()/2;i++){
           string s1=s.substr(0,i);
           ans=ans||check(s,s1,0);
           if(ans) return true;
       }
        return ans;
    }
};