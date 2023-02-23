class Solution {
public:
    unordered_map<string,int>mp;
    unordered_map<int,bool>prev;;
    bool fun(string s,int i){
        if(i>=s.length())
            return prev[i]=true;
        
        if(prev.find(i)!=prev.end())
            return prev[i];
        
        string str="";
        
        for(int k=i;k<s.length();k++){
            str+=s[k];
            
            if(mp.find(str)!=mp.end() && fun(s,k+1))
              return  prev[k]=true;
            
            // i++;
        }
        
        return prev[i]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        
        for(int i=0;i<wordDict.size();i++)
            mp[wordDict[i]]++;
        
        return fun(s,0);
    }
};