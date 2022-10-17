class Solution {
public:
    bool checkIfPangram(string sentence) {
       int h[26]={0};
        for(int i=0;i<sentence.length();i++){
            h[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(h[i]==0)
                return false;
        }
        return true;
    }
};