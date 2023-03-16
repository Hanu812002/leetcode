class Solution {
public:
    int two_words(string a,string b){
        unordered_map<int,int>mp;
        
        for(int i=0;i<a.length();i++){
            mp[a[i]]++;
        }
        
        for(int i=0;i<b.length();i++){
            if(mp.find(b[i])!=mp.end())
                return 0;
        }
        return a.length()*b.length();
    } 
    int maxProduct(vector<string>& words) {
        
        int ans=0;
        
        unordered_map<string,int>mp;
        
                string s,a;
              int n=0;
        for(int i=0;i<words.size();i++){
            
             s=words[i];
            
            int mask=0;
            
            for(auto &st : s){
                mask|=(1<<(st-'a'));
            }
            // cout<<mask<<endl;
            mp[s]=mask;
        }
        for(int i=0;i<words.size();i++){
           
            a=words[i];
            
            for(int j=i+1;j<words.size();j++){
                
                s=words[j];
                n=a.length()*s.length();
                if((mp[a]&mp[s])==0)
                    
                    ans=max(ans,n);
            }
        }
        return ans;
    }
};