class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>q;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0)
                    q.push({i,j});
                else 
                    mat[i][j]=-1;
            }
        }
        
        int d1[]={0,0,1,-1};
        int d2[]={1,-1,0,0};
        while(q.size()>0){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int a=0;a<4;a++){
                int i=x+d1[a];
                int j=y+d2[a];
                
                if(i>=0 && i<n & j>=0 && j<m && mat[i][j]==-1){
                    q.push({i,j});
                    mat[i][j]=mat[x][y]+1;
                }
            }
        }
        return mat;
    }
};