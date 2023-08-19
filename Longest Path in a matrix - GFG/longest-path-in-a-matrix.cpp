//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int solver(int i, int j, int n, int m, int delrow[], int delcol[], vector<vector<int>> &matrix, vector<vector<int>> &dp) {
    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int maxi = 1;
    int currentVal = matrix[i][j];

    for (int k = 0; k < 4; k++) {
        int nrow = i + delrow[k];
        int ncol = j + delcol[k];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && matrix[nrow][ncol] > currentVal) {
            maxi = max(maxi, 1 + solver(nrow, ncol, n, m, delrow, delcol, matrix, dp));
        }
    }

    dp[i][j] = maxi;
    return maxi;
}

int longestIncreasingPath(vector<vector<int>> &matrix) {
    if (matrix.empty()) return 0;

    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));

    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};

    int maxPath = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            maxPath = max(maxPath, solver(i, j, n, m, delrow, delcol, matrix, dp));
        }
    }

    return maxPath;
}


};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends