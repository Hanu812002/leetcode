class Solution {
public:
    double dfs(unordered_map<string,unordered_map<string,double>>m,string a,string b,unordered_set<string>&s){
        
        if(m[a].find(b)!=m[a].end()){
            return m[a][b];
        }
        for(auto i:m[a]){
            if(s.find(i.first)==s.end()){
                s.insert(i.first);
                double val=dfs(m,i.first,b,s);
                if(val){
                    m[a][b]=i.second*val;
                    return m[a][b];
                }
            }
        }
        return 0;
        
    }
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& v, vector<vector<string>>& q) {
        vector<double>ans;
        unordered_map<string,unordered_map<string,double>>m;
        for(int i=0;i<e.size();i++){
            m[e[i][0]][e[i][1]]=v[i];
            m[e[i][1]][e[i][0]]= (double)1/(v[i]);
        }
        for(int i=0;i<q.size();i++){
            unordered_set<string>s;
            double val=dfs(m,q[i][0],q[i][1],s);
            if(!val)
                ans.push_back(-1.0  );
            else
                ans.push_back(val);
        }
        return ans;
        
    }
};