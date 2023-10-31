class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       vector<int>ans;
        ans.push_back(pref[0]);
        
        int a=pref[0];
        int b=pref[0];
        for(int i=1;i<pref.size();i++){
            a=a^pref[i];
            b=b^a;
            ans.push_back(a);
            a=b;
        }
        return ans;
    }
};