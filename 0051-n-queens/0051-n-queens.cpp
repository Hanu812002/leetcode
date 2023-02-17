class Solution {
public:
    vector<vector<string>>ans;
    
    bool issafe(vector<string>&b,int r,int c,int n){
        
        
        int row=r;
        int col=c;
        
        while(row>=0 && col>=0){
            if(b[row][col]=='Q')
                return false;
            
            row--;
            col--;
        }
        
        row=r;
        col=c;
        
        while(col>=0){
            if(b[row][col]=='Q')
                return false;
            
            col--;
        }
        
        
        row=r;
        col=c;
        
        while(row<n && col>=0)
        {
            if(b[row][col]=='Q')
                return false;
            
            row++;
            col--;
        }
        
        return true;
        
    }
    
    void nqueen(vector<string>&b,int c,int n){
        if(c==n){
            ans.push_back(b);
            return;
        }
        
        for(int r=0;r<n;r++){
            if(issafe(b,r,c,n)){
                b[r][c]='Q';
                nqueen(b,c+1,n);
                b[r][c]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        string s(n,'.');
        
        for(auto &i : board)
            i=s;
        
        nqueen(board,0,n);
        
        return ans;
    }
};