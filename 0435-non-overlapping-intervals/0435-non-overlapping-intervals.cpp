class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i=0;
        int ans=0;
        for(int j=1;j<intervals.size();j++){
            if(intervals[i][1]>intervals[j][0])
            {
                ans++;
                if(intervals[i][1]>= intervals[j][1]){
            
                     i=j;
                }
            }
            else
            i=j;
        }
  return ans;
    }
};