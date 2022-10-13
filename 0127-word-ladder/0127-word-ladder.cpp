class Solution {
public:
    int ladderLength(string startWord, string targetWord, vector<string>& w) {
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