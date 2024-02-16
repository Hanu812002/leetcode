class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
         unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i : mp){
          pq.push(i.second);
        }
        while(k>0){
        auto p =pq.top();
        if(p<=k)
         {
             pq.pop();
             k=k-p;
         }
         else
         break;
        }
        return pq.size();
    }
};