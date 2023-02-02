class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
       unordered_map<int,int>mp;
        for(int i=0;i<order.size();i++)
            mp[order[i]]=i;
        
        for(int i=1;i<words.size();i++){
            string a=words[i-1];
            string b=words[i];
            
            int n=min(a.length(),b.length());
            int c=0;
            for(int j=0;j<n;j++){
                if(a[j]==b[j])
                 {
                    c++;
                    continue;
                 }
    // cout<<a[j]<<" "<<b[j]<<" "<<mp[a[j]]<<" "<<mp[b[j]]<<endl;

                if((mp[a[j]]-mp[b[j]])>0){
                    return false;
                }
                else if((mp[a[j]]-mp[b[j]])<1)
                    break;
                
            }
            
            if(b.length()<a.length() && c==b.length())
                return false;
            
        }
        return true;
    }
};