class Solution {
public:
//     bool ispalindrome(string S)
// {
//     string P = S;
//     reverse(P.begin(), P.end());
//     if (S == P) {
//       return true;
//     }
//     else {
//         return false;
//     }
// }
 
//     int countSubstrings(string s) {
//        int n=s.length();
//         int c=0;
//         for(int i=0;i<n;i++){
//             string str="";
//             for(int j=i;j<n;j++){
//                 str+=s[j];
//                  if(ispalindrome(str))
//                      c++;
//             }
//         }
//         return c;
//     }
     int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            int x=i-1,y=i+1;
            ans++;
            while(x>=0 and y<n and s[x]==s[y]){
                ans++;
                x--;
                y++;
            }
             x=i,y=i+1;
            while(x>=0 and y<n and s[y]== s[x]){
                ans++;
                x--;
                y++;
            }
        }
        return ans;
    }
};