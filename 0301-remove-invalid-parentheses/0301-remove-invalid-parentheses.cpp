class Solution {
public:

  unordered_set<string> set;

  int getmin(string str){
   stack<char>st;
   for(int i=0;i<str.length();i++){
       if(str[i]=='(')
        st.push(str[i]);
        else if(str[i]==')'){
            if(st.size()==0)
            st.push(str[i]);
            else if(st.top()=='(')
            st.pop();
            else
            st.push(str[i]);

        }
        else
         continue;
   } 

   return st.size();
}
   void fun(string str,int minremove,vector<string>&v ){
        if(minremove==0)
        {
            int mrnow=getmin(str);
            if(mrnow==0){
                if(!count(v.begin(),v.end(),str))
                  v.push_back(str);
            }
        }


   for(int i=0;i<str.length();i++){
       if(str[i]==')' || str[i]=='('){
       string left=str.substr(0,i);
       string right=str.substr(i+1);
       string a=left+right;
       if(set.find(a) == set.end()) {
               set.insert(a);
          fun(left+right,minremove-1,v);
           }
           
       }
   }


}
   
   
    vector<string> removeInvalidParentheses(string s) {
        vector<string>v;
        int mr=getmin(s);
        fun(s,mr,v);
        return v;
        
    }
};