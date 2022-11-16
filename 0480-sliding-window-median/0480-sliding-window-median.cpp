class Solution {
public:
    double fun(set<pair<int,int>>&s,int k){
        auto it=s.begin();
        if(k%2==0){
            double sum=0;
            advance(it,k/2-1);
            sum+=(double)it->first;
            advance(it,1);
            sum+=(double)it->first;
            return sum/2;
        }
        else{
            advance(it,k/2);
            return (double)it->first;
        }
    }
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
       vector<double>v;
        set<pair<int,int>>s;
        for(int i=0;i<k;i++)
            s.insert({nums[i],i});
        v.push_back(fun(s,k));
        for(int i=k;i<nums.size();i++){
            s.erase({nums[i-k],i-k});
            s.insert({nums[i],i});
            v.push_back(fun(s,k));
        }
        return v;
    }
};