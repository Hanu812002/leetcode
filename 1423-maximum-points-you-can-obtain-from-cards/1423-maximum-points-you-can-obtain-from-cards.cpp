class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int s=0;
        // if(k==c.size()){
            for(int i=0;i<k;i++)
                s+=c[i];
        int res=s;
        for(int i=k-1;i>=0;i--){
            res-=c[i];
            res+=c[c.size()+i-k];
            s=max(s,res);
        }
       
        return s;
    }
};