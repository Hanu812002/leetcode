class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int s=0;
        int i=0;
        while(i<costs.size()){
            s+=costs[i];
            if(s>coins)
                break;
            i++;
        }
        return i;
    }
};