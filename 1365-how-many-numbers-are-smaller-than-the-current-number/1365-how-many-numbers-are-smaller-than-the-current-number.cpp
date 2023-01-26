class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==v[j]){
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};