class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int ans=0;
        
        for(auto i : details){
            // string s=i[11]+i[12];
            
            int age=(i[11]-'0')*10+(i[12]-'0');
            
            if(age>60)
                ans++;
        }
        return ans;
    }
};