class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
     vector<int> v(100,0);
        for(int i = 0;i<ranges.size();i++){
            v[ranges[i][0]]++;
            v[ranges[i][1]+1]--;
        }
        
        
        for(int i = 1;i<=60;i++){
            v[i] += v[i-1];
        }
        
        
        for(int i = left;i<=right;i++){
            if(v[i]<=0){
                return false;
            }
            
        }
        return true;
    }
};