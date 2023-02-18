class Solution {
public:
    string getPermutation(int n, int k) {
        
       int fact=1;
        for(int i=1;i<n;i++)
            fact*=i;
        
        vector<int>v;
        for(int i=0;i<n;i++)
            v.push_back(i+1);
        
        string ans="";
        
        k--;
        
        while(v.size()!=0)
        {
            ans+=to_string(v[k/fact]);
            v.erase(v.begin()+(k/fact));
            if(v.size()==0)
                break;
            
            k=k%fact;
            fact=fact/v.size();
        }
        
        return ans;
    }
};