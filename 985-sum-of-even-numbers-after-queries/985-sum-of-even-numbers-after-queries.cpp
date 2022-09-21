class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int s=0;
        for(auto i :nums){
            if(i%2==0)
                s+=i;
        }
        
        vector<int>v;
        for(int i=0;i<queries.size();i++){
            if(nums[queries[i][1]] %2==0)
                s-=nums[queries[i][1]];
            int a=abs(queries[i][0]+nums[queries[i][1]]);
            // cout<<a<<" ";
            if(a%2==0)
                s+=(queries[i][0]+nums[queries[i][1]]);
            // else
            //     s-=nums[queries[i][1]];
            nums[queries[i][1]]=(queries[i][0]+nums[queries[i][1]]);
            // cout<<nums[queries[i][1]]<<"  "<<s<<endl;
            v.push_back(s);
        }
        return v;
    }
};