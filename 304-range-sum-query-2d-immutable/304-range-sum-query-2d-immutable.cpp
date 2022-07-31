class NumMatrix {
public:
    vector<vector<int>> prefix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for(int i = 0;i<m;i++){
            vector<int> row(n);
            row[0] = matrix[i][0];
            for(int j = 1;j<n;j++){
                row[j] = row[j-1] + matrix[i][j];
            }
            prefix.push_back(row);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1;i<=row2;i++){
            sum += prefix[i][col2];
            if(col1>0) sum -= prefix[i][col1-1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */