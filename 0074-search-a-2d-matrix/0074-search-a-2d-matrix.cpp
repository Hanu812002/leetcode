class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//       int i=0;
//       int j=matrix.size()-1;
//       int col=matrix[0].size()-1;
//         while(i<j){
//             int m=i+(j-i)/2;
            
//              if(matrix[m][0] <= target && target<=matrix[m][col-1])
//              { 
//                 break;
//              }
//             if(matrix[m][0]>target){
//                 j=m-1;
//             }
//             else if(matrix[m][col-1]<target )
//             {
//                 i=m+1;
//             }
            
//         }
//         // cout<<i<<" "<<j<<endl;
        
//         int x=0;
//         while(x<col){
//             int m=x+(col-x)/2;
            
//             if(matrix[i][m]==target)
//                 return true;
//             else if(matrix[i][m]>target)
//                 col=m-1;
//             else
//                 x=m+1;
//         }
        
//         return false;
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col - 1;

        int mid = (start+end)/2;

        while(start<=end){
            int element = matrix[mid/col][mid%col];

            if(element==target){
                return 1;
            }

            if(element<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = (start+end)/2;
        }
        return 0;
    
    }
};