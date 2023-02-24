class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>q2;
        int min_v=INT_MAX;
        for(auto i : nums){
           
            if(i%2!=0)
                i=i*2;
            
            min_v=min(min_v,i);
            q2.push(i);
            
        }
        int ans=INT_MAX;
        
        while(true){
            
            int mx=q2.top(); q2.pop();
            
            ans=min(ans,mx-min_v);
            
            if(mx%2!=0)
                break;
            
            mx=mx/2;
            min_v=min(min_v,mx);
            q2.push(mx);
            
        }
        return ans;
    }
};