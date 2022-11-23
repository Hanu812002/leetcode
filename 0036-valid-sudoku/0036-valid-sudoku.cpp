class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
       int h[10]={0};
        // h[0]=1;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c=b[i][j];
                int x=int(c);
                x=x-48;
                if(x>=1 && x<=9)
                h[x]++;
            }
              for(int k=0;k<10;k++){
                 // cout<<h[k]<<" ";
                  if(h[k]!=0)
                  {
                      if(h[k]!=1)
                      return false;
                  }
                  h[k]=0;
              }
            // cout<<endl;
        }  
            for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c=b[j][i];
                int x=int(c);
                x=x-48;
                if(x>=1 && x<=9)
                h[x]++;
            }
              for(int k=0;k<10;k++){
                 // cout<<h[k]<<" ";
                  if(h[k]!=0)
                  {
                      if(h[k]!=1)
                      return false;
                  }
                  h[k]=0;
              }  
        }
        for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            for(int k = 0; k<3; k++)
            {
                for(int l = 0; l<3; l++)
                {
                    // cout << (i*3)+k <<" " << (j*3)+l << endl; 
                     char c=b[(i*3)+k][(j*3)+l];
                int x=int(c);
                x=x-48;
                if(x>=1 && x<=9)
                h[x]++;

                    // mp[]++;
                   
                }
            }
            
            
              for(int k=0;k<10;k++){
                 // cout<<h[k]<<" ";
                  if(h[k]!=0)
                  {
                      if(h[k]!=1)
                      return false;
                  }
                  h[k]=0;
              }  
            // mp.clear();
            
        }
    }
        return true;  
    }
};