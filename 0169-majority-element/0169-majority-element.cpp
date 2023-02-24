class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int counter = 0, majority;
        for (int num : nums) {
            if (!counter) {
                majority = num;
            }
            counter += num == majority ? 1 : -1;
        }
        return majority;
        
        
//         int majority = 0;
//         for (unsigned int i = 0, mask = 1; i < 32; i++, mask <<= 1) {
//             int bits = 0;
//             for (int num : nums) {
//                 if (num & mask) {
//                     bits++;
//                 }
//             }
//             if (bits > nums.size() / 2) {
//                 majority |= mask;
//             }
//         }
//         return majority;
   
    }
};