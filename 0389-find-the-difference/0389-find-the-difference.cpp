class Solution {
public:
    char findTheDifference(string s, string t) {
        int h[256]={0};
        for(int i=0;i<t.length();i++){
            h[t[i]]++;
        }
        for(int j=0;j<s.length();j++){
            h[s[j]]--;
        }
        for(int i=0;i<256;i++){
            if(h[i]==1)
                return i;
        }
        return 0;
        
    }
};