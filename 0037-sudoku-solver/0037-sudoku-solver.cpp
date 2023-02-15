class Solution {
public:
     bool issafe(vector<vector<char>>& board,int r,int c,char val){
        
        for(int i=0;i<9;i++){
            if(board[i][c]==val)
                return false;
            if(board[r][i]==val)
                return false;
            if(board[3*(r/3)+(i/3)][3*(c/3)+(i%3)]==val)
                return false;
        }
        
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){ 
                if(board[i][j]=='.'){
                    
                    for(char k='1';k<='9';k++){
                    
                        if(issafe(board,i,j,k))
                        {
                            board[i][j]=k;
                            
                            if(isValidSudoku(board))
                                return true;
                            
                            board[i][j]='.';
                        } 
                    }
                
                return false;
            }
        }
    }
        
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        isValidSudoku(board);
        
    }
};