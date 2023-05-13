class Solution {
public:
//     int countStr(int n, int bCount, int cCount)
// {
//     if (bCount < 0 || cCount < 0) return 0;
//     if (n == 0) return 1;
//     if (bCount == 0 && cCount == 0) return 1;
    
//     // int res = countStr(n-1, bCount, cCount);
//    int res = countStr(n-1, bCount-1, cCount);
//     res += countStr(n-1, bCount, cCount-1);
 
//     return res;
// }
    int countGoodStrings(int low, int high, int zero, int one) {
         vector<int>v(high+1,0);
         v[0]=1;
        for(int i=0;i<=high;i++){
            if(i+zero<=high){
                v[i+zero]+=v[i];
                v[i+zero]=v[i+zero]%(1000000000+7);
            }
            if(i+one<=high){
                 v[i+one]+=v[i];
                v[i+one]=v[i+one]%(1000000000+7);
            }
        }
        long long s=0;
        for(int i=low;i<=high;i++){
            s+=v[i];
            s=s%(1000000000+7);
        }
        return s;
        
    }
};