class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        int n=p.length();
      
        if(p.length()>s.length())
            return v;
        
        // sort(p.begin(),p.end());
        for(int i=0;i<=s.length()-n;i++){
            
         int f=0;
         string str=s.substr(i,n);
         int h[26]={0};
         
        for(int j=0;j<n;j++){
            h[p[j]-'a']++;
             h[str[j]-'a']--;
        }
            
            for(int k=0;k<26;k++){
                if(h[k]!=0)
                    f=1;
            }
           
            if(f==0)
                v.push_back(i);
            
        }
        return v;
    }
};