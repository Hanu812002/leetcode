class Solution {
public:
    int compress(vector<char>& chars) {
//         string s="";
        
//         for(auto i : chars)
//             s+=i;
        
//         chars.clear();
//         int ans=0;
        
//         int i=1;
//         int j=0;
        
//         while(i<s.length()){
            
//             if(s[i]==s[j]){
//                 i++;
//             }
//             else {
//                 chars.push_back(s[j]);
//                 ans+=1;
//                 int dis=i-j;
//                 j=i;
//                 i++;
//                 string str=to_string(dis);
//                 if(dis>1)
//                 {ans+=str.length();
                
//                 }
//             }
//         }
//         cout<<ans<<endl;
//         cout<<i<<" "<<j<<endl;
//                 ans+=1;
//                 int dis=i-j;
//                 j=i;
//                 i++;
//                 string str=to_string(dis);
//                 if(dis>1)
//                 ans+=str.length();
//         cout<<s<<endl;
//         return ans;
//     }
         int n = chars.size();
        if (n == 1) {
            return 1;
        }
        
        int i = 0, j = 0;
        while (i < n) {
            int count = 1;
            while (i < n - 1 && chars[i] == chars[i + 1]) {
                count++;
                i++;
            }
            
            chars[j++] = chars[i++];
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[j++] = c;
                }
            }
        }
        
        return j;
    }
};