class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n = nums.size();
        int maxi = 0;
        
        unordered_set<int> uset, seen;
        
        for(int i = 0; i < n; i++)
            uset.insert(nums[i]);
        
        for(int i = 0; i < n; i++){
            
            if( seen.find(nums[i]) == seen.end() ){
                
                int count = 1;
                
                int present = nums[i]-1;
                while(uset.find(present) != uset.end()){
                    count++;
                    seen.insert(present--);                
                }
                
                // Finding right longest streak
                present = nums[i]+1;
                while(uset.find(present) != uset.end()){
                    count++;
                    seen.insert(present++);           
                }
                
                maxi = max(maxi, count);
            }
            
        }
        
        return maxi;

    }
};