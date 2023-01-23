class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>mp;
        if(trust.size()==0 && n==1)
            return 1;
        set<int>s;
        for(int i=0;i<trust.size();i++){
            mp[trust[i][1]]++;
            s.insert(trust[i][0]);
        }
        for(auto i :mp){
            if(i.second==n-1 && s.count(i.first)==0){
                return i.first;
            }
        }
        return -1;
    }
};