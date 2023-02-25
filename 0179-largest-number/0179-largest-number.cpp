class Solution {
public:
    static bool cmp(int a,int b){
        string s1=to_string(a);
        string s2=to_string(b);
        
        return (s1+s2)>(s2+s1);
    }
    string largestNumber(vector<int>& nums) {
     
        sort(nums.begin(),nums.end(),cmp);
        string ans="";
        
        for(int i=0;i<nums.size();i++){
            ans+=to_string(nums[i]);
        }
        int c=0;
        
        for(int i=0;i<ans.length();i++){
            if(ans[i]=='0')
                c++;
        }
        
        if(c==ans.length())
            return "0";
        
        return ans;
        
    }
};