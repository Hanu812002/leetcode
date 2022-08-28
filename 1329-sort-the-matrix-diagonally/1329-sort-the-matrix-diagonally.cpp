class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<m;i++)
            fun(mat,0,i,n,m);
        for(int i=1;i<n;i++)
            fun(mat,i,0,n,m);
        
        return mat;
    }
    void fun(vector<vector<int>>& mat,int r,int c,int n,int m){
        vector<int>v;
        int i=r;
        int j=c;
        while(r<n && c<m)
        {
            v.push_back(mat[r][c]);
            r++;
            c++;
        }
        sort(v.begin(),v.end());
        int k=0;
        while(i<n && j<m){
            mat[i++][j++]=v[k++];
        }
    }
};