class Solution {
public:
    string convert(string s, int numRows) {
        
     if(numRows==1 || numRows>=s.length()) return s;
        string res = "";
           
        for(int j=0;j<numRows;j++){
            res+=s[j];
            int x=j;
            while(x<s.length()){
                int y= (numRows-j-1)*2;
                x=x+y;
                if(y!=0 && x<s.length()) res+=s[x];
                
                y=j*2;
                x=x+y;
                if(y!=0 && x<s.length()) res+=s[x];
            }
        }
        
        return res;
    }
};