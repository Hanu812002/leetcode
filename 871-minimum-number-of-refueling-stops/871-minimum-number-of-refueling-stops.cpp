class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& s) {
     
        int n=s.size();
        vector<vector<long long>>t(n+1,vector<long long>(n+1,0));
        for(int i=0;i<=n;i++)
            t[i][0]=startFuel;
        
        for(int i=0;i<=n;i++){
            for(int j=1;j<=i;j++){
                t[i][j]=t[i-1][j];
                
                if(t[i-1][j-1]>=s[i-1][0])
                    t[i][j] = max( t[i][j] , t[i-1][j-1]+s[i-1][1]);
            }
        }
        
        for(int i=0;i<=n;i++){
            if(t[n][i]>=target)
                return i;
        }
        return -1;
            
    }
};