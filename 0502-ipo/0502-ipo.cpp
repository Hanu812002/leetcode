class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        
        vector<pair<int,int>>v;
        
        for(int i=0;i<capital.size();i++){
            v.push_back({capital[i],profits[i]});
        }
        
        int j=0;
        sort(v.begin(),v.end());
        priority_queue<int>q;
        for(int i=0;i<k;i++){
           
            while(j<v.size() && v[j].first <= w){
                q.push(v[j].second);
                j++;
            }
            if(q.empty())
                break;
            
            w+=q.top();
            cout<<w<<" ";
            q.pop();
        }
        
        return w;
    }
};