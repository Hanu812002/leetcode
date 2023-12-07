class Solution {
public:
    string largestOddNumber(string s) {
        
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]%2!=0)
             j=i;
        }
        if(j==0 && s[0]%2==0)
        return "";
        // cout<<j<<endl;
        return s.substr(0,j+1);
    }
};