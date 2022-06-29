class Solution {
public:
    int longestPalindrome(string s) {
       int h[256]={0};
        for(int i=0;i<s.length();i++){
            h[s[i]]++;
        }
        int c=0;
        int f=0;
        for(int i=0;i<256;i++){
            if(h[i]%2==0)
                c+=h[i];
            else{
                f=1;
                c+=h[i];
                c--;
            }
        }
        if(f==1)
            c+=1;
        return c;
    }
};