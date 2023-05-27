class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len=0;
        
        int f=0;
        for(int i=s.length()-1;i>=0;i--){
            
            
            if(s[i]==' ' && f==1)
                break;
            
            else if(s[i]!=' ')
            {
                f=1;
                len++;
            }
            
            
        }
        
        return len;
        
    }
};