class Solution {
public:
   
	string solve(string s) {
		if (s.empty()) return "";
		int i = 0;

		int balance = 0; string curAns = "";

		vector<string> res;
		for (int j = i; j < s.length(); j++) {
			if (s[j] == '1') balance++;
			else balance--;

			if (balance == 0) {
                
				res.push_back("1" + solve(s.substr(i + 1, j - i - 1)) + "0");
                
				i = j + 1;
			}
		}

		sort(res.begin(), res.end());
        
		for (int i = res.size() - 1; i >= 0; i--) curAns += res[i];
        
        
		return curAns;
	}



	string makeLargestSpecial(string s) {
        
		int len = s.length();
        
		return solve(s);

	}
};