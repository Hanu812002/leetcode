class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int , int> m;
        for(auto i:nums){
            // cout<<i<<" ";
            m[i]++;
        }
        
         map<int , int> :: iterator it;
        vector<pair<int,int>>v;
  for (it=m.begin(); it!=m.end(); it++) 
  { v.push_back({it->second,it->first});
    // cout << it->first << ": " << it->second << endl;
  }
        sort(v.begin(),v.end());
       int n=v.size()-1;
        vector<int>a;
        for(int i=0;i<k;i++){
            a.push_back(v[n].second);
            n--;
        }
        return a;
    }
};