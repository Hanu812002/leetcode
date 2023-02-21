class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
        
        
        int mn=prices[0];
        int ans=prices[1]-prices[0];
        
        for(int i=1;i<prices.size();i++){
            mn=min(mn,prices[i]);
            ans=max(ans,prices[i]-mn);
        }
        return ans;
        
    }
};