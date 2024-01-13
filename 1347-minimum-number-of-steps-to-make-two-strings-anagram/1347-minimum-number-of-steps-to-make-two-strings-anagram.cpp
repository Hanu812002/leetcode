class Solution {
public:
    int minSteps(string s, string t) {
        int h[26]={0};
        
        for(int i=0;i<t.size();i++){
            h[t[i]-'a']++;
        }
        
        for(int i=0;i<s.size();i++){
            h[s[i]-'a']--;
        }
        
        int ans=0;
        
        for(int i=0;i<26;i++){
            if(h[i]>0)
                ans+=h[i];
        }
        return ans;
        
    }
};