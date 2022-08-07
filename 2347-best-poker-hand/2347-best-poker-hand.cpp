class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        unordered_map<int,int> p;
        unordered_map<int,int> q;
        int freq=INT_MIN;
        for(int i=0;i<ranks.size();i++)
        {
            p[ranks[i]]++;
            freq=max(freq,p[ranks[i]]);
        }
        for(int i=0;i<suits.size();i++)
        {
            q[suits[i]]++;
        }
        if(q.size()==1)
            return "Flush";
        if(freq>=3)
            return "Three of a Kind";
        if(freq==2)
            return "Pair";
        return "High Card";
        
    }
};