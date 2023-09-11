class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>>ans;
        int m=*max_element(g.begin(),g.end());
        vector<int>arr[m+1];
        
        for(int i=0;i<g.size();i++){
            arr[g[i]].push_back(i);
        }
        for(int i=0;i<=m;i++){
            if(arr[i].size()>0){
                if(arr[i].size()<i)
                    ans.push_back(arr[i]);
                else{
                     vector<int>a=arr[i];
                        vector<int>v;
                        for(int j=0;j<arr[i].size();j++){
                            v.push_back(a[j]);    
                         if((j+1)%i==0){
                              ans.push_back(v);
                                v.clear();
                             }
                    }
                
            }
        }
        }
        return ans;
    }
};