class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        vector<vector<int>>ans;
        priority_queue<pair<int,int>>pq;
        int n=score.size();
        
        for(int i=0;i<n;i++){
            pq.push({score[i][k],i});
        }
        
        while(pq.size()!=0){
            int a=pq.top().second;
            pq.pop();
            ans.push_back(score[a]);
        }
        return ans;
    }
};