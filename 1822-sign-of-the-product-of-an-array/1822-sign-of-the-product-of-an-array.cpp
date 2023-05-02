class Solution {
public:
    // int signFunc(long long p){
    //     if(p>0)
    //         return 1;
    //     else if (p==0)
    //         return 0;
    //     else
    //         return -1;
    // }
    int arraySign(vector<int>& nums) {
        int p=0;
        int n=0;
        for(auto i : nums)
        {
            if(i>0)
                p++;
            else if(i==0)
                return 0;
            else
                n++;
        }
        if(n%2==0)
            return 1;
        else if(n%2!=0)
            return -1;
      return 0;
    }
};