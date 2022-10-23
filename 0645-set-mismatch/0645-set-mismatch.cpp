class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
     int n=nums.size();
        int h[100000]={0};
        vector<int>v;
        for(int i=0;i<n;i++){
            h[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(h[i]==2)
                v.push_back(i);
           
        }
         for(int i=1;i<=n;i++){
          if(h[i]==0)
                v.push_back(i);  
        }
        return v;   
    }
};