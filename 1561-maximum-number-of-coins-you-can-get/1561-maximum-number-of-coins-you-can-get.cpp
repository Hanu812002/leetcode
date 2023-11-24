class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(),piles.rend());
        
        int ans=0;
        int j=piles.size()-1;
        for(int i=1;i<piles.size();i+=2){
            if(i>j)
                break;
            ans+=piles[i];
            j--;
        }
        return ans;
    }
};