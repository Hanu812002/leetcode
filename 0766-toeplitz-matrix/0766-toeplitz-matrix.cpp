class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& ma) {
        int n=ma.size();
        int m=ma[0].size();
        cout<<n<<" "<<m<<endl;
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
//                 if(i-1<1 || j-1<1)
//                     continue;
                
                if(ma[i-1][j-1]!=ma[i][j])
                    return false;
            }
        }
    
        
        return true;
    }
};