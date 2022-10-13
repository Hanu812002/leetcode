//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& w) {
        // Code here
        queue<pair<string,int>> q;
        unordered_set<string> st(w.begin(),w.end());
        st.erase(startWord);
        q.push({startWord,1});
        while(!q.empty()){
            string s=q.front().first;
            int step=q.front().second;
            q.pop();
            if(s==targetWord)
            return step;
            
            for(int i=0;i<s.length();i++){
                char ch=s[i];
                for(char c='a';c <='z';c++)
                {
                    s[i]=c;
                    if(st.find(s)!=st.end()){
                        st.erase(s);
                        q.push({s,step+1});
                    }
                }
                s[i]=ch;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends