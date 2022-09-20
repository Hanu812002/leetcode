class Solution {
public:
    string minWindow(string s, string t) {
         int freqPat[256] = {0}, freqWin[256] = {0};
        
        for(char &i : t)
            freqPat[i]++;
        
        int cnt = 0,
            start = 0, //start ind of current window
            startInd = -1, //index of ans window
            minLen = INT_MAX; //min size window
        
        for(int i=0; i<s.size(); i++)
        {
            char ch = s[i];
            freqWin[ch]++;
            if(freqPat[ch] and freqWin[ch] <= freqPat[ch])
                cnt++;
            
            if(cnt == t.length())
            {
             
                
                while(!freqPat[s[start]] || freqWin[s[start]] > freqPat[s[start]])
                {
                    freqWin[s[start]]--;
                    start++;
                }
                
                // Update minLen
                int windowLen = i - start + 1; // current window's size
                if(minLen > windowLen) 
                {
                    minLen = windowLen;
                    startInd = start;      // Used to extarct the answer substring              
                }
            }
        }
        return startInd == -1 ? "" : s.substr(startInd, minLen);
    }
};