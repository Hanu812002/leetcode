class Solution {
public:
    bool isAnagram(string s, string t) {
        
     int h[256]={0};
        for(int i=0;i<s.length();i++){
            h[s[i]]++;
        }
           for(int i=0;i<t.length();i++){
            h[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(h[i]!=0)
                return 0;
        }
        return 1;
        
    }
};