class Solution {
public:
   int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> map;
        int count = 0;
        
        for(char c: tasks){
            map[c]++;
            count = std::max(count, map[c]);
        }
        
        int ans = (count -1)*(n+1); 
        
        for(auto m: map){
            if(m.second == count){
                ans++;
            }
        }
        
        
        return std::max((int) tasks.size(), ans);
        
    }
};