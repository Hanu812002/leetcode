class Solution {
public:
    int find_row(vector<vector<int>>& matrix, int target, int m, int n){
        
        
        int i=0;
        int j=m-1;
        
        while(i<=j){
            
            
            int mid=i+(j-i)/2;
            
            cout<<i<<"  "<<j<<"  "<<mid<<endl;
            
            if(matrix[mid][0]<=target && matrix[mid][n-1]>=target)
                return mid;
            
            else if(matrix[mid][0]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        
        
        
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        int row=find_row(matrix,target,m,n);
        
        // cout<<row<<endl;
        if(row==-1)
          return false;
        
        int i=0;
        int j=n-1;
        
         while(i<=j){
            
            
            int mid=i+(j-i)/2;
            
            if(matrix[row][mid]==target)
                return true;
            
            else if(matrix[row][mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        
        return false;
    }
};