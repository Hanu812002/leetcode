class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
         long long t=target-nums[i];
            for(int j=i+1;j<n;j++){
                long long s=t-nums[j];
                int x=j+1;
                int y=n-1;
                while(x<y){
                    long long s1=nums[x]+nums[y];
                    if(s1>s)
                        y--;
                    else if(s1<s)
                        x++;
                    else{
                        vector<int>v(4,0);
                        v[0]=(nums[i]);
                         v[1]=(nums[j]);
                         v[2]=(nums[x]);
                         v[3]=(nums[y]);
                        ans.push_back(v);
                        while(x<y && nums[x]==v[2])
                            x++;
                         while(x<y && nums[y]==v[3])
                            y--;
                    }
                }
                while(j+1<n && nums[j+1]==nums[j])
                    j++;
            }
             while(i+1<n && nums[i+1]==nums[i])
                    i++;
        }
        return ans;
    }
};