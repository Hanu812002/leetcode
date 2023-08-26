class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        
      if(!pairs.size())
return 0;
sort(pairs.begin(),pairs.end());

    int ans=1,x=pairs[0][1];
    for(int i=1;i<pairs.size();i++)
    {
        if(pairs[i][0]>x)
        {
            ans++;
            x=pairs[i][1];
        }
        else
        {
            x=min(x,pairs[i][1]);
        }
    }
    return ans;  
    }
};