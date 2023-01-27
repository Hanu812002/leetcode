// #define long long int;
class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<string>s;
         for(int i=0;i<t.size();i++){
           string c=t[i];
           if(c=="+"){
               string a=s.top();
               s.pop();
               string b=s.top();
               s.pop();
               cout<<a<<b<<endl;
              long long x=stoll(a);
              long long y=stoll(b);
            //   cout<<x+y<<endl;
               s.push(to_string(x+y)); 
            }
            else if(c=="-"){
               string a=s.top();
               s.pop();
               string b=s.top();
               s.pop();
               cout<<a<<b<<endl;
              long long x=stoll(a);
              long long y=stoll(b);
            //   cout<<x+y<<endl;
               s.push(to_string(y-x)); 
            }
            else if(c=="/"){
               string a=s.top();
               s.pop();
               string b=s.top();
               s.pop();
               cout<<a<<b<<endl;
              long long x=stoll(a);
              long long y=stoll(b);
            //   cout<<x+y<<endl;
               s.push(to_string(y/x)); 
            }
            else if(c=="*"){
               string a=s.top();
               s.pop();
               string b=s.top();
               s.pop();
               cout<<a<<b<<endl;
              long long x=stoll(a);
              long long y=stoll(b);
            //   cout<<x+y<<endl;
               s.push(to_string(x*y)); 
            }
            else
            s.push(t[i]);
         }
          string ans=s.top();
          return stoi(ans);
    }
};