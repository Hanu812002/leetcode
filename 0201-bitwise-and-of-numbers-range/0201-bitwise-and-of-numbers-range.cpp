class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
//         int bits1=0,bits2=0;
        
//         if(left==right)
//             return left;
        
//         if(abs(left-right)==1)
//             return left&right;
        
//         while(left){
//             bits1++;
//             left=left>>1;
//         }
        
//         while(right){
//             bits2++;
//             right=right>>1;
//         }
        
//         if(bits1==bits2)
//             return pow(2,bits1-1);
        
        
//         return 0;
        
     int c=0;
        while(left !=right){
            left=left>>1;
            right=right>>1;
            c++;
        }
        return left<<c;
    }
};