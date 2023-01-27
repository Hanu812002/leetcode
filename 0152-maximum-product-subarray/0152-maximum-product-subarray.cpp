class Solution {
public:
    int maxProduct(vector<int>&a) {
          int choice1,choice2;
        int maxm=a[0],minm=a[0],ans=a[0];
        for(int i=1;i<a.size();i++){
            choice1=minm*a[i];
            choice2=maxm*a[i];
            maxm=max(a[i],max(choice1,choice2));
            minm=min(a[i],min(choice1,choice2));
            ans=max(maxm,ans);
        }
        return ans;
    }
};