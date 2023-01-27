class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
     int ans=0;
        for(int i=0;i<32;i++)
        {
            int bit=1<<i;
            // cout<<bit<<endl;
            int c=0;
            for(int j:nums)
            {
                if(j&bit)
                {c++;
                  // cout<<bit<<" "<<j<<" "<<endl;
                }
            }
            if(c%3)
            ans|=bit;
        }
        return ans;
    }
};