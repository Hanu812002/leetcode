class Solution {
public:
    vector<vector<int>>ans;
    void combination_sum3(int i,int k,int n,vector<int>v){
        // cout<<i<<"  "<<n<<endl;
        if(n<0 || v.size()>k || i>10)
            return ;
        
        if(n==0 && v.size()==k)
        {
            ans.push_back(v);
            return;
        }
                combination_sum3(i+1,k,n,v);

        
        v.push_back(i);
        combination_sum3(i+1,k,n-i,v);
        // v.pop_back();
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        combination_sum3(1,k,n,v);
        return ans;
    }
};