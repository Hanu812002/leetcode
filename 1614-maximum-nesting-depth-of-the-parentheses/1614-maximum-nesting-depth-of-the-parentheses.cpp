class Solution {
public:
    int maxDepth(string s) {
              stack<int> st;
        int maxsize=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
                st.push(ch);
            }
            int n=st.size();
            maxsize=max(n,maxsize);
            if(ch==')')
            {
                st.pop();
            }   
        }
        return maxsize;
  
    }
};