class Solution {
public:
    string multiply(string num1, string num2) {
//        vector<vector<int>>ans;
//         int k=0;
//         for(int i=num2.length()-1;i>=0;i--){
//             vector<int>v;
//             int a=num2[i]-'0';
//             int c=0;
//             for(int a=0;a<k;a++)
//                 v.push_back(0);
//             for(int j=num1.length()-1;j>=0;j--){
                
//                 int b=num1[j]-'0';
//                 int m=(a*b)+c;
//                 c=m/10;
//                 m=m%10;
//                 v.push_back(m);
//             }
//             k++;
//             if(c==1)
//                 v.push_back(1);
//             // reverse(v.begin(),v.end());
//             ans.push_back(v);
//         }
        
//         for(int i=0;i<ans.size();i++){
//             for(int j=0;j<ans[i].size();j++){
//                 cout<<ans[i][j]<<" ";
//             }
//             cout<<endl;
//         }
        
//         return "";
        
         if (num1 == "0" || num2 == "0") return "0";
        
        vector<int> res(num1.size()+num2.size(), 0);
        
        for (int i = num1.size()-1; i >= 0; i--) {
            for (int j = num2.size()-1; j >= 0; j--) {
                res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        
        int i = 0;
        string ans = "";
        while (res[i] == 0) i++;
        while (i < res.size()) ans += to_string(res[i++]);
        
        return ans;
    }
};