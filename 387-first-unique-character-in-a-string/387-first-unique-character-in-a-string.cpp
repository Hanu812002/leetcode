class Solution {
public:
    int firstUniqChar(string s) {
        int h[26]={0};
        int n =s.length();
        for(int i=0;i<n;i++){
            h[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(h[s[i]-'a']==1)
                return i;
        }
        return -1;
    
    }
};