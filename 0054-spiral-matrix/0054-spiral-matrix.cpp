class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int l=0;
        int t=0;
        int r=matrix[0].size()-1;
        int d=matrix.size()-1;
        vector<int>v;
        
        while(l<=r && t<=d){
            
            // cout<<l<<" "<<r<<" "<<t<<" "<<d<<endl;
            for(int i=l;i<=r;i++)
                v.push_back(matrix[t][i]);
            
              t++;
            
                       // cout<<l<<" "<<r<<" "<<t<<" "<<d<<endl;
            
           for(int i=t;i<=d;i++)
                v.push_back(matrix[i][r]);
            
            r--;
            
                       // cout<<l<<" "<<r<<" "<<t<<" "<<d<<endl;
            
            if(d>=t){
                for(int i=r;i>=l;i--)
                v.push_back(matrix[d][i]);
             d--;   
            }
             
                       // co//ut<<l<<" "<<r<<" "<<t<<" "<<d<<endl;
            if(r>=l){
                for(int i=d;i>=t;i--)
                v.push_back(matrix[i][l]);
            l++;
                 
            }
                       //cout<<l<<" "<<r<<" "<<t<<" "<<d<<endl;
        }
        
        return v;
    }
};