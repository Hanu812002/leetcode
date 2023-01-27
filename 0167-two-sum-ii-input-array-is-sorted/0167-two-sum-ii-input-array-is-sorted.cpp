class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
       int i=0;
        int j=numbers.size()-1;
        while(i<j){
               if(numbers[j]+numbers[i]==target)
               {
                   
                   v.push_back(i+1);
                   v.push_back(j+1);
                   break;
               }
            else if(numbers[j]+numbers[i] > target)
                j--;
            else
                i++;
           }
       
        return v;
    }
};