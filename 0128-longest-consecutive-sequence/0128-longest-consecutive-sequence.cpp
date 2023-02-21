class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        
        vector<int>vis(nums.size(),0);
        
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
           int c=1;
            if(vis[i]==0){
                vis[i]=1;
                bool p=true;
                bool b=true;
                int x=nums[i]-1;
                int y=nums[i]+1;
                while(p || b){
                    if(mp.find(x)!=mp.end()){
                        c++;
                        vis[mp[x]]=1;
                        x--;
                    }
                    else
                        p=false;
                    
                    
                    if(mp.find(y)!=mp.end()){
                       vis[mp[y]]=1;
                        y++;
                        c++;
                    }
                    else
                        b=false;
                }
                
            }
            
            ans=max(ans,c);
        }
        
        return ans;
    }
};