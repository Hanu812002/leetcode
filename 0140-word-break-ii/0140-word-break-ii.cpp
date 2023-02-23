class Solution {
public:
    
    vector<string>v;
    unordered_map<string,int>mp;
    
    void fun(string s,string ans){
        if(s.length()==0){
            ans.pop_back();
            v.push_back(ans);
            return;
        }
        
        for(int i=0;i<s.length();i++){
            string str=s.substr(0,i+1);
            
            if(mp.find(str)!=mp.end()){
                
                string str2=s.substr(i+1);
                fun(str2,ans+str+" ");
            }
        }
    }
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
          for(int i=0;i<wordDict.size();i++)
            mp[wordDict[i]]++;
    
        fun(s,"");
        return v;
    }
};