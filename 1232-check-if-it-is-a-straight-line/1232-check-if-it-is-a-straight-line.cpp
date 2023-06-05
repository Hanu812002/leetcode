class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
         int a=c[1][1]-c[0][1];
            int b=(c[1][0]-c[0][0]);

        for(int i=2;i<c.size();i++){
            int m=(c[i][1])-(c[i-1][1]);
            int n=(c[i][0])-(c[i-1][0]);
            if(m*b != n*a)
                 return 0;
        }
        return 1;
    }
};