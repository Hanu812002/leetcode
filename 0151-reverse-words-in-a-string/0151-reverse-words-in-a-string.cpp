class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string st="";
        int f=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && f==1){
                // cout<<ans<<"4"<<st<<endl;
               ans+=st;
               ans+=' ';
               st="";
                f=0;
            }
            else if(s[i]!=' '){
                st=s[i]+st;
                f=1;
            }
        }
        // ans.pop_back();
        
        // cout<<ans<<endl;
        ans+=st;
                if(ans[ans.size()-1]==' ')
            ans.pop_back();
        return ans;
    }
};