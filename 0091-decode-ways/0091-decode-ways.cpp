class Solution {
int numWays(string s, int i, int * dp) {

		int res = 0;

		int n = s.length();

		// The end of the array has been reached and so the string 
		// can be decoded
		if(i == n) {
			return 1;
		}

		// Get results from memo table if available
		if(dp[i] != -1) {
			return dp[i];
		}

		// Cut input string at i creating a substring of size 1
		// and determine if remaining substring can be decoded
		if(i < n) {
			string s_loc = s.substr(i, 1);
			int val = stoi(s_loc);
			if(1 <= val && val <= 26) {
				if(s[i] == '0') {
					res = 0;
				}
				if(s[i] != '0') {
					res = numWays(s, i + 1, dp);
				}                
			}
		}

		// Cut input string at i creating a substring of size 2
		// and determine if remaining substring can be decoded        
		if(i < n - 1) {
			string s_loc = s.substr(i, 2);
			int val = stoi(s_loc);
			if(1 <= val && val <= 26) {
				if(s[i] == '0') {
					res = 0;
				}
				if(s[i] != '0') {
					res = res + numWays(s, i + 2, dp);
				}          
			}
		}

		// Store results in memo table
		dp[i] = res;

		return res;
	}

public:
	int numDecodings(string s) {

		int n = s.length();

		// Declare and initialize memo table
		int * dp = new int[n];
		for(int i = 0; i < n; ++i) {
			dp[i] = -1;
		}

		// Compute number of ways to decode
		return numWays(s, 0, dp);
	}
};