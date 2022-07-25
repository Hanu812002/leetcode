class Solution {
public:
   int fun(int a, int b,vector<int>&n,int t){
        if(b>=a){
        int mid=(a+b)/2;
        if(n[mid]==t)
            return mid;
        else if(n[mid]>t)
            return fun(a,mid-1,n,t);
        else
            return fun(mid+1,b,n,t);
        }
        // else
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int n=nums.size();
       int a= fun(0,n-1,nums,target);
        if(a==-1)
        {
            v.push_back(-1);
            v.push_back(-1);
             return v;
        }
        else{
            int i;
            for( i=a;i>=0;i--)
                if(nums[i]!=target)
                    break;
        
        v.push_back(i+1);
            int j;
            for( j=a;j<nums.size();j++){
                if(nums[j]!=target)
                    break;
            }
        v.push_back(j-1);
        }
    
        
        
        return v;
    }
};