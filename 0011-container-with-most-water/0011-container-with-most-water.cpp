class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int j=h.size()-1;
        int ans=-1;
        while(i<j){
            int len=j-i;
            ans=max(ans,len*(min(h[i],h[j])));
            if(h[i]>h[j])
                j--;
            else
                i++;
        }
        return ans;
    }
};