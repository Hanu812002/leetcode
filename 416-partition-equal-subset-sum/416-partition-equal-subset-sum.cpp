class Solution {
public:
     bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        bool t[n+1][sum+1];
        for(int i=0;i<=n;i++){
            t[i][0]=1;
        }
        for(int i=1;i<=sum;i++)
        {
            t[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
              if(arr[i-1]<=j){
                  t[i][j]=t[i-1][j] || t[i-1][j-arr[i-1]];
              }    
              else
              t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(auto i:nums)
            s+=i;
        if(s%2!=0)
            return false;
        
        s=s/2;
        int n=nums.size();
        bool t[n+1][s+1];
        for(int i=0;i<=n;i++)
            t[i][0]=1;
        for(int j=1;j<=s;j++)
            t[0][j]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=s;j++){
                if(j>=nums[i-1])
                    t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[n][s];
    }
};