class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
        
        int r=0;
        int c=0;
        
        int n=matrix.size()-1;
        int m=matrix[0].size()-1;
        
        while(r<=n && c<=m){
            
        for(int i=r;i<=m;i++)
            ans.push_back(matrix[r][i]);
        
        r++;
        
        for(int i=r;i<=n;i++)
            ans.push_back(matrix[i][m]);
        
        m--;
        
         if(n>=r){   
        for(int i=m;i>=c;i--)
            ans.push_back(matrix[n][i]);
        // c++;
        n--;
        }
            
            if(m>=c){
        for(int i=n;i>=r;i--)
            ans.push_back(matrix[i][c]);
        
        c++;
            }
    }
    
    return ans;
    }
};