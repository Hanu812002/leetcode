class Solution {
public:
    bool isPossibleDivide(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n%groupSize)
            return false;
        unordered_map<int,int> mp;
        for (int i:hand)
            mp[i]+=1;
        sort(hand.begin(),hand.end());
        for (int i:hand){
            if (mp[i]==0)
                continue;
            int n= mp[i];
            mp[i]-=n;
            for(int j=1;j<groupSize;j++){
                if(mp.find(i+j)==mp.end())
                    return false;
                mp[i+j]-=n;
                if (mp[i+j]<0)
                    return false;
            }
        }
        return true;
    }
};