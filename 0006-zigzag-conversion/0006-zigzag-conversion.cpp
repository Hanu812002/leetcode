class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        vector<string> temp(numRows);
        int direction = 1;
        int j = 0;
        
        if(numRows==1)
            return s;
        
        for(int i=0;i<s.length();i++){
            
            // cout<<j<<endl;
            temp[j] += s[i];
            
            if(j==numRows-1){
              direction=-1;
            }
            
            else if(j==0){
                direction=1;
            }
            
            j+=direction;
            
        }
        
        for(auto s:temp){
            ans += s;
        }
        
        return ans;
    }
};