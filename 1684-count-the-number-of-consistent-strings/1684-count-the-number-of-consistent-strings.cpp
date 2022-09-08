class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int mask = 0, ans = 0;
        
        for(auto &ch : allowed) mask |= 1<<(ch-'a');
        
        for(auto &str : words){
            bool flag = true;
            for(auto &ch : str){
                if(!(mask & (1<<(ch-'a')))) {flag = false; break;}
            }
            if(flag) ans++;
        }
        
        return ans;
    
    }
};