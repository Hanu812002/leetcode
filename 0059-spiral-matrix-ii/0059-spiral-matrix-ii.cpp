class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         int l=0;
        int t=0;
        int r=n-1;
        int d=n-1;
        vector<vector<int>>v(n,vector<int>(n,0));
        int k=1;
        while(l<=r && t<=d){
            
            for(int i=l;i<=r;i++)
            v[t][i]=k++;
            
              t++;
            
                       // cout<<l<<" "<<r<<" "<<t<<" "<<d<<endl;
            
           for(int i=t;i<=d;i++)
            v[i][r]=k++;
            
            r--;
            
                       // cout<<l<<" "<<r<<" "<<t<<" "<<d<<endl;
            
            if(d>=t){
                for(int i=r;i>=l;i--)
                v[d][i]=k++;
             d--;   
            }
             
                       // co//ut<<l<<" "<<r<<" "<<t<<" "<<d<<endl;
            if(r>=l){
                for(int i=d;i>=t;i--)
                 v[i][l]=k++;
            l++;
                 
            }
                       //cout<<l<<" "<<r<<" "<<t<<" "<<d<<endl;
        }
        
        return v;
    }
};