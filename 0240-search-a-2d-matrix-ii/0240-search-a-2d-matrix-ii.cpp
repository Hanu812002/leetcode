class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix[0].size()-1;
        
        while(j>=0 && i<=matrix.size()-1){
            if(matrix[i][j]==target)
                return true;
            
            else if(matrix[i][j]>target)
                j--;
            else
                i++;
        }
        return false;
    }
};