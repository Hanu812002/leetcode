class Solution {
public:
    
    bool water_jug(int x,int y,int z){
        if(x+y<z)
            return false;
        
        queue<int>q;
        q.push(0);
        
        // unordered_map<int,int>mp;
        // mp[0]=1;
        vector<int>mp(1000001,0);
        mp[0]=1;
        vector<int>dir={x,-x,y,-y};
        
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            
            for(int i : dir){
                int t=i+curr;
                
                if(t==z)
                    return true;
                
                if(t<0 || t>x+y)
                    continue;
                
                if(mp[t]==0){
                    q.push(t);
                    mp[t]=1;
                }
            }
        }
        return false;
    }
    
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
     
        return water_jug(jug1Capacity,jug2Capacity,targetCapacity);
    }
};