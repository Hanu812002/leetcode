class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string>ans;
        
        if(nums.size()==0)
            return ans;
        
        int a=nums[0];
        
        int b=a;
        
        for(int i=1;i<nums.size();i++){
            
            if(b+1==nums[i]){
                b=nums[i];
            }
            else{
                if(a==b)
                    ans.push_back(to_string(a));
                else
                    ans.push_back(to_string(a)+"->"+to_string(b));
                a=nums[i];
                b=nums[i];
            }
        }
        
                if(a==b)
                    ans.push_back(to_string(a));
                else
                    ans.push_back(to_string(a)+"->"+to_string(b));
        return ans;
    }
};