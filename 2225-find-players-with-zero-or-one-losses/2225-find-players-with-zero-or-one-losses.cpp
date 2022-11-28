class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        unordered_map<int,int>m1,m2;
        for(int i=0;i<m.size();i++){
            m1[m[i][0]]++;
            m2[m[i][1]]++;
        }
        set<int>v1,v2;
        vector<vector<int>>v;
        for(int i=0;i<m.size();i++){
        
            if(m1[m[i][0]]>0){
                if(m2.find(m[i][0])==m2.end())
                    v1.insert(m[i][0]);
            }
            if(m2[m[i][1]]==1)
            v2.insert(m[i][1]);
            
            
            }
          vector<int>a1(v1.begin(),v1.end());
           vector<int>a2(v2.begin(),v2.end());
        
        v.push_back(a1);
          v.push_back(a2);
        return v;
        
        
            
    }
};