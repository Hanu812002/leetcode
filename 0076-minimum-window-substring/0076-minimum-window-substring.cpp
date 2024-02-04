class Solution {
public:
    string minWindow(string s, string t) {
       
        if(s.length()==0 || t.length()==0)
            return "";
        
        
        int h[128]={0};
        
        for(int i=0;i<t.length();i++)
            h[t[i]]++;
        
        int c=t.length();
        
        int st=0;
        int en=0;
        int min_len=INT_MAX;
        int si=0;
        
        while(en<s.length()){
            
            if(h[s[en]]>0)
                c--;
            
            h[s[en]]--;
            
            en++;
            
            while(c==0){
                if(min_len>(en-st)){
                    min_len=en-st;
                    si=st;
                }
                h[s[st]]++;
                if(h[s[st]]>0)
                    c++;
            st++;

            }
        }
        // cout<<en<<" "<<st<<min_len<<endl;
        // if(c==0){
        //     if(min_len>(en-st)){
        //             min_len=en-st;
        //             si=st;
        //         }
        // }
        
        return min_len== INT_MAX ? "" :s.substr(si,min_len);
    }
};