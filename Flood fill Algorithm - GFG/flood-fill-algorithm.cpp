//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
 void fun(vector<vector<int>>& image, int sr, int sc,int old, int newc,int n,int m){
     if(sr<0 || sr>=n || sc<0 || sc>=m ){
         return;
     }
     else if(image[sr][sc]!=old || image[sr][sc]==newc)
     return;
     
     image[sr][sc]=newc;
     fun(image,sr+1,sc,old,newc,n,m);
       fun(image,sr-1,sc,old,newc,n,m);
         fun(image,sr,sc-1,old,newc,n,m);
           fun(image,sr,sc+1,old,newc,n,m);
 }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        if(image[sr][sc]==newColor)
            return image;
        int old=image[sr][sc];
         int r=image.size();
        int c=image[0].size();
        fun(image,sr,sc,old,newColor,r,c);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends