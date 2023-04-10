class Solution {
public:
    bool isValid(string s) {
     stack<char> st;
        int c=0;
     for(int i=0;i<s.length();i++){
         if(s[i]=='(' ||s[i]=='[' ||s[i]=='{'){
             // char a=s[i];
             st.push(s[i]);
             c++;
         }
         else{
             if(st.empty())
                 return false;
         if(st.top()=='{' && s[i]=='}'){
             st.pop();
                c++;
         }
         else if(st.top()=='[' && s[i]==']')
         {     c++;
             st.pop();
         }
         else if(st.top()=='(' && s[i]==')')
         {
             st.pop();
                c++;
         }
         }
     }
        if(st.empty() && c==s.length())
            return true;
        
        return false;
    }
};