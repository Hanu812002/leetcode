//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
bool isValid(int i,int j,int row,int col) {
        if(i<0||j<0||i>=row||j>=col) return false;
        
        else return true;
    }
    
    vector<vector<int>> dirs={{-1,0},{0,-1},{-1,-1},{-1,1},{1,-1},{1,0},{1,1},{0,1}};
    
    bool dfs(int i,int j,vector<vector<char>>& grid,string word,int row,int col){
        for(int k=0;k<8;k++)
        {
            int ni = i;
            int nj = j;
            int len=0;
            while(isValid(ni,nj,row,col) && grid[ni][nj]==word[len]) {
                ni+=dirs[k][0];
                nj+=dirs[k][1];
                len++;
            }
            if(len==word.length()) return true;
        }
        return false;
    }

	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    int row = grid.size();
	    int col = grid[0].size();
	    vector<vector<int>> ans;
	    
	    for(int i=0;i<row;i++)
	    {
	        for(int j=0;j<col;j++)
	        {
	            if(dfs(i,j,grid,word,row,col) && grid[i][j]==word[0]) ans.push_back({i,j});
	        }
	    }
	    
	    return ans;
	}
//     bool fun(vector<vector<char>>grid, string word , int i, int j ,int x,int y){
//         int c=0;
//         int k=0;
//         while(i>=0 && j>=0 && i<grid.size() && j<grid[0].size()){
//             if(grid[i][j] == word[k]){
//                 k++;
//                 c++;
//             }
//             else
//              break;
//             i+=x;
//             j+=y;
//         }
//         if(c==word.length())
//         return true;
        
//         else
//         return false;
//     }
// 	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
// 	    // Code here
// 	    vector<vector<int>>v;
// 	    for(int i=0;i<grid.size();i++){
// 	        for(int j=0;j<grid[0].size();j++){
// 	           if(fun(grid,word,i,j,-1,-1))
// 	            {
// 	                vector<int>v1;
// 	                v1.push_back(i);
// 	                v1.push_back(j);
// 	                v.push_back(v1);
// 	            } 
	            
// 	             else if(fun(grid,word,i,j,-1,0))
// 	            {
// 	                vector<int>v1;
// 	                v1.push_back(i);
// 	                v1.push_back(j);
// 	                v.push_back(v1);
// 	            }   
// 	            else if(fun(grid,word,i,j,-1,1))
// 	            {
// 	                vector<int>v1;
// 	                v1.push_back(i);
// 	                v1.push_back(j);
// 	                v.push_back(v1);
// 	            }   
// 	           else  if(fun(grid,word,i,j,0,-1))
// 	            {
// 	                vector<int>v1;
// 	                v1.push_back(i);
// 	                v1.push_back(j);
// 	                v.push_back(v1);
// 	            }    
// 	            else if(fun(grid,word,i,j,0,1))
// 	            {
// 	                vector<int>v1;
// 	                v1.push_back(i);
// 	                v1.push_back(j);
// 	                v.push_back(v1);
// 	            }    
// 	            else if(fun(grid,word,i,j,1,-1))
// 	            {
// 	                vector<int>v1;
// 	                v1.push_back(i);
// 	                v1.push_back(j);
// 	                v.push_back(v1);
// 	            }    
// 	            else if(fun(grid,word,i,j,1,0))
// 	            {
// 	                vector<int>v1;
// 	                v1.push_back(i);
// 	                v1.push_back(j);
// 	                v.push_back(v1);
// 	            }     
// 	           else  if(fun(grid,word,i,j,1,1))
// 	            {
// 	                vector<int>v1;
// 	                v1.push_back(i);
// 	                v1.push_back(j);
// 	                v.push_back(v1);
// 	            } 
// 	        }
// 	    }
// 	    return v;
// 	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends