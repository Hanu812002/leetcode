class Solution {
public:
    vector<int>freq(string s){
      vector<int>h(26,0);
             for(int j=0;j<s.length();j++){
                 h[s[j]-'a']++;
             }
        return h;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
   
        vector<int>fre(26,0);
        for(auto &x : words2){
            vector<int>h=freq(x);
             for(int j=0;j<26;j++){
                fre[j]=max(fre[j],h[j]);
             }
        }
        
        vector<string>v;
         for(auto &x : words1){
                 vector<int>h=freq(x);
             int f=1;
             for(int j=0;j<26;j++){
                if(fre[j]>h[j])
                    f=0;
             }
             if(f==1)
                 v.push_back(x);
             
        }
        return v;
        
    }
};