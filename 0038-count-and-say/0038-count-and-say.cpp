class Solution {
public:
    string countAndSay(int n) {
        string s="1";
         for(int i=0;i<n-1;i++){
               char c=s[0];
              int count=1;
              string str="";
             for(int j=1;j<s.length();j++){

                 if(c!=s[j]){
                    //  char a=count-'0';
                    // string a=to_string(count);
                   str+=to_string(count);
                   str.push_back(c);
                   count=0;
                   c=s[j];
                 }
                 count++;
             }

        // //    char b=count-'0';
        //     string a=to_string(count);
        //            str.push_back(a);
             
             str+=to_string(count);
             str.push_back(c);
             s=str;
          cout<<s<<endl;
         }
         return s;
    }
};