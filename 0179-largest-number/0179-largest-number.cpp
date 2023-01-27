class Solution {
public:
     static bool cmp(string a, string b)
   {
     string val1 = a + b;
     string val2 = b + a;
     return val1 > val2;
   }
    
    
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        int c=0;
        for(auto i : nums){
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end(),cmp);
        string str="";
        for(auto i :s){
            str+=i;
        }
        for(auto i:str)
        {
            if(i!='0')
                c=1;
        }
        if(c==1)
        return str;
        
        else
        return "0";
    }
};