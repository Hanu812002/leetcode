class Solution {
public:
    int maxScore(string s) {
        vector<int>z(s.length(),0);
       vector<int>o(s.length(),0);
        
        
        if(s[0]=='0')
            z[0]=1;
        
        for(int i=1;i<s.length();i++){
            if(s[i]=='0')
                z[i]=1;
            
                z[i]+=z[i-1];
        }
        if(s[s.length()-1]=='1')
            o[s.length()-1]=1;
        
        
        for(int i=s.length()-2;i>=0;i--){
            if(s[i]=='1')
                o[i]=1;
            
                o[i]+=o[i+1];
        }
        
        int ans=0;
        for(int i=1;i<s.length();i++){
            
            ans=max(ans,z[i-1]+o[i]);
        }
        
        return ans;
    }
};