class Solution {
public:
     void  queen(int n,vector<vector<int>>  &board,int col,vector<int> &leftRow,vector<int> &lowerDig,vector<int> &upperDig, vector<vector<int>> &ans, vector<int> temp){
            if(col==n){
                ans.push_back(temp);
                return;
            }
            for(int row=0;row<n;row++){
                if(leftRow[row]==0 && lowerDig[row+col]==0 
                && upperDig[n-1+col-row]==0){
                 
                 leftRow[row]=1;
                 upperDig[n-1+col-row]=1;
                 lowerDig[row+col]=1;
                 board[row][col]=1;
                 temp.push_back(row);                            
                 queen(n,board,col+1,leftRow,lowerDig,upperDig,ans,temp);
                 leftRow[row]=0;
                 upperDig[n-1+col-row]=0;
                 lowerDig[row+col]=0;
                 board[row][col]=1;
                 temp.pop_back(); 
                }
            }   
}
    vector<vector<string>> solveNQueens(int n) {
            vector<vector<int>> board(n, vector<int>(n, 0));
     vector<vector<int>> ans;
    vector<int> temp;
    vector<int> leftRow(n,0);
      vector<int> lowerDig(2*n-1,0);
      vector<int> upperDig(2*n-1,0);
      queen(n,board,0,leftRow,lowerDig,upperDig ,ans,temp);
      vector<vector<string>>v;
    for(vector<int>i : ans){
        // in k=0;
                vector<string>v1;
        for(int j=0;j<i.size();j++){
           int a=i[j];
                    string s="";

            for(int k=0;k<i.size();k++)
            {
            if(k==a)
                s+='Q';
            else
                s+='.';
            }
             v1.push_back(s);
        }
       
        v.push_back(v1);
    }
      return v;

    }
};