class Solution {
public:
    string reorganizeString(string s) {
        map<int,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        priority_queue<pair<int,int>>pq;
        for(auto i : mp){
            pq.push({i.second,i.first});
        }

        string res="";
        pair<int,int>t1,t2;
        while(!pq.empty()){
            t1=pq.top();
            pq.pop();
            res+=t1.second;

            if(!pq.empty()){
               res += pq.top().second;
                t2 = pq.top();
                 pq.pop();
                if (t2.first > 1) pq.push({ t2.first - 1, t2.second });
            }
            if (t1.first > 1) pq.push({ t1.first - 1, t1.second });
        }

        for (int i = 1; i < res.size(); i++)
            if (res[i] == res[i - 1]) return "";
        return res;
        
    }
};