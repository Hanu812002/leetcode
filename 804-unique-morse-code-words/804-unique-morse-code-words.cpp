class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
      string h[26]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>se;
     for(int i=0;i<words.size();i++){
         string s="";
         for(int j=0;j<words[i].size();j++){
             s+=h[words[i][j]-'a'];
         }
         se.insert(s);
     }
        return se.size();
    }
};