class Solution {
public:
    int partitionString(string s) {
//         int h[26]={0};
        
//         for(int i=0;i<s.length();i++){
//             h[s[i]-'a']++;
//         }
//         int ans=-1;
        
//         for(int i=0;i<26;i++){
//             ans=max(ans,h[i]);
//         }
//         return ans;
        
        unordered_map<int,int>mp;
        
        int c=0;
        
        for(int i=0;i<s.length();i++){
            
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=1;
            }
            else{
                c++;
                mp.clear();
                mp[s[i]]=1;
            }
        }
        return c+1;
    }
};