class Solution {
public:
    bool checkValidString(string s) {
//         stack<int>st;
//         int str=0;
//         for(int i=0;i<s.length();i++){
            
//             if(s[i]=='*')
//                 str++;
//             else if(st.empty() || s[i]=='(')
//                 st.push(s[i]);
            
//             else if(st.top()=='(' && s[i]==')')
//             {   st.pop();
//              if(str)
//                  str--;
//             }
            
            
//             else if(str)
//             {
//                 st.pop();
//                 str--;
//             }
//         }
        
//         while(str){
//             if(st.empty())
//             return true;
        
//             st.pop();
//             str--;
//         }
        
//         if(st.empty())
//             return true;
        
        
//        return false;       
        
        stack<int> open,star;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]=='(') open.push(i);
            else if(s[i]=='*')star.push(i);
            else{
                if(!open.empty())
                {
                    open.pop();
                }else if(!star.empty()) star.pop();
                else return false;
            }
        }
        while(!open.empty())
        {
            if(!star.empty())
            {
                if(star.top()>open.top()){
                    star.pop(); open.pop();
                }else return false;
            }else return false;
        }
        return true;
    }
    
};