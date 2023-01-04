class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int j=h.size()-1;
        int ans=-1;
        while(i<j){
            int w=j-i;
            int he=min(h[i],h[j]);
            ans=max(ans,he*w);
            if(he==h[i])
             i++;
            else
                j--;
        }
        return ans;
    }
};