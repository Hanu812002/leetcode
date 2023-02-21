class Solution {
public:
    bool isPalindrome(string s) {
       string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i] <= 'Z' )
            {
               str+=(s[i]+32); 
            }
            else if((s[i]>='a' && s[i] <= 'z') || (s[i]>='0' && s[i] <= '9'))
            {
                str+=s[i];
            } 
        }
        // cout<<str<<endl;
        int i=0;
        int j=str.length()-1;
        
        while(i<j){
            if(str[i]==str[j])
            {
                i++;
                j--;
            }
            else
                return false;
        }
     
        return true;
    }
};