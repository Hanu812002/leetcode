class Solution {
public:
    int minimumRounds(vector<int>& t) {
        unordered_map<int,int>mp;
        for(int i=0;i<t.size();i++)
            mp[t[i]]++;
        
        
      int ans=0;
        for(auto i : mp){
        
                if(i.second==1)
                 return -1;
            
                int m=i.second%3;
                if(m==2)
                {
                    ans+=i.second/3;
                    ans+=1;
                }
                else if(m==1)
                {
                    ans+=(i.second/3)-1;
                    ans+=2;
                }
                else{
                    ans+=(i.second/3);
                }
             
        }
        
        return ans;
    }
};