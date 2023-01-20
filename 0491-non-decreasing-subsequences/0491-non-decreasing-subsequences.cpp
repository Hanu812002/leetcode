class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>v;
    void printSubsequences(vector<int>arr, int index,
                       vector<int> &subarr,int n)
{
    
    if (index == n)
    {
       if(subarr.size()>1){
          int i=1;
          while(i<subarr.size()){
              if(subarr[i-1]<=subarr[i])
                  i++;
              else
                  break;
          }
          
           if(i==subarr.size())
               v.insert(subarr);
           
       }  
        
      return;    
    }
    else
    {
        subarr.push_back(arr[index]);
         printSubsequences(arr, index + 1, subarr,n);
        subarr.pop_back();
        printSubsequences(arr, index + 1, subarr,n);
    }   
}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>a;
        printSubsequences(nums,0,a,nums.size());
        for(auto i : v)
            ans.push_back(i);
        return ans;
    }
};