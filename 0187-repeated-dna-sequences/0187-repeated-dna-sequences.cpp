class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int>m;
        int n=s.size();
        if(n<=10)
            return {};
        vector<string>v;
        for(int i=0;i<=n-10;i++){
            string str=s.substr(i,10);
             m[str]++;
        }
        for(auto i : m){
            if(i.second>1)
                v.push_back(i.first);
        }
        return v;
    }
};