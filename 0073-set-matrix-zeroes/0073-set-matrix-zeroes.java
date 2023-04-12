class Solution {
    public void setZeroes(int[][] matrix) {
      int m = matrix.length;
      int n = matrix[0].length;
      int newmatrix[][] = new int[m][n];
      int i,j,k;

      //copying the original matrix to new matrix
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              newmatrix[i][j]=matrix[i][j];
          }
      }  

      //making that particular row & column zero if zero is found in any row or column
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              if(matrix[i][j]==0)
              {
                  for(k=0;k<m;k++)
                  {
                      newmatrix[k][j]=0;
                  }

                  for(k=0;k<n;k++)
                  {
                      newmatrix[i][k]=0;
                  }
              }
          }
      }

      //copying the newmatrix to original matrix to get the answer and we are doing this 
      // as using two matrixes will exceeded the memory utilization.
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              matrix[i][j]=newmatrix[i][j];
          }
      }
}
    
}