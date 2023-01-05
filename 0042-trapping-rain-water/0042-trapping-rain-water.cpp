class Solution {
public:
    int trap(vector<int>& h) {
        //  int n=h.size();
        // int l[n];
        // l[0]=h[0];
        // for(int i=1;i<h.size();i++){
        //     l[i]=(max(h[i],l[i-1]));
        // }
        // int r[n];
        // // int n=h.size();
        // r[n-1]=h[n-1];
        //  for(int i=n-2;i>=0;i--){
        //     r[i]=(max(h[i],r[i+1]));
        // }
        // int p=0;
        // for(int i=1;i<n-1;i++){
        //     p+=min(l[i],r[i])-h[i];
        // }
        // return p;
        int l=0;
        int ans=0;
        int r=h.size()-1;
        int lm=0;
        int rm=0;
        while(l<r){
            if(h[l]<h[r]){
                lm=max(lm,h[l]);
                ans+=lm-h[l];
                l++;
            }
            else{
             rm=max(rm,h[r]);
                ans+=rm-h[r];
                r--;
            }
        }
        return ans;
    }
};