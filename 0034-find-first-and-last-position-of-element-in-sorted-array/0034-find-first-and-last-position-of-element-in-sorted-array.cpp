class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
           int s=0;
        int e=nums.size()-1;
        vector<int>v;
        int res=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                res=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
                s=mid+1;
            else
                e=mid-1;
        }
        v.push_back(res);
        if(res==-1)
        {
            v.push_back(res);
            return v;
        }
        
        s=0;
        e=nums.size()-1;
        res=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                res=mid;
                s=mid+1;
            }
            else if(nums[mid]<target)
                s=mid+1;
            else
                e=mid-1;
        }
        v.push_back(res);
        
        return v;
      
    }
};