class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
       vector<int>v;
        for(int i=0;i<grid[0].size();i++){
            int c=i;
            int n=-1;
            for(int j=0;j<grid.size();j++){
                n=c+grid[j][c];
                
                if(n<0 || n>=grid[0].size()|| grid[j][c]!=grid[j][n])
                {
                    c=-1;
                    break;
                }
                c=n;
            }
            v.push_back(c);
        }
        return v; 
    }
};