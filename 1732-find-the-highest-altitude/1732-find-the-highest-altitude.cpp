class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s=0;
        int m=INT_MIN;
        for(int i=0;i<gain.size();i++)
        {   
            m=max(m,s);
            s+=gain[i];
            m=max(m,s);
        }
        return m;
    }
};