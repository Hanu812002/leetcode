class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
                 vector<vector<string>>s;
        unordered_map<string,vector<string>>m;
        for(int i=0;i<strs.size();i++){
            string s1=strs[i];
            sort(s1.begin(),s1.end());
            m[s1].push_back(strs[i]);
        }
        for(auto i=m.begin();i!=m.end();i++){
            s.push_back(i->second);
        }
        return s;
    }
};