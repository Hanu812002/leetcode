// class Solution {
// public:
//     vector<vector<int>>v;
//        void fun(vector<int>a,int n, int k, int i){
           
//            if(a.size()==k){
//                // cout<<a[0]<<" "<<a[1]<<endl;
//                v.push_back(a);
               
//                return;
//            }
//             for(int j=i;j<=n;j++){
//                 a.push_back(j);
//                 fun(a,n,k,j+1);
//                 a.pop_back();
//             }
//        }
//     vector<vector<int>> combine(int n, int k) {
//         vector<int>a;
//         fun(a,n,k,1);
//         return v;    
//     }
// };

class Solution {
public:
    void solve(int val, int size,int k, int n,vector<int>&curr,vector<vector<int>>& ans){
        if(size<=0){
            if(curr.size()==k){
                ans.push_back(curr);
            }
            return;
        }
        if(val>n) return;

        //include
        curr.push_back(val);
        solve(val+1,size-1,k,n,curr,ans);
        curr.pop_back();
        //not include
        solve(val+1,size,k,n,curr,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        solve(1,k,k,n,curr,ans);
        return ans;
    }
};
