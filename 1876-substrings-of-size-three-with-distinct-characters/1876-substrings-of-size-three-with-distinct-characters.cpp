class Solution {
public:
    int countGoodSubstrings(string n) {
//         unordered_map<char,int>m;
//         int c=0;
        
//         for(int i=0;i<s.length();i++){
//             m[s[i]]++
                
//                 if(m.size()==3)
//                     c++;
//             if(i>=3)
//             {
//                 m[s[i-3]]--;                
//                 if(m[s[i-3]]==0)
//                     m
//             }
                

//         }
        int s=n.size();
        int a=0;
        for(int i=1;i<s-1;i++)
        {
            if(n[i]!=n[i-1]&&n[i]!=n[i+1]&&n[i-1]!=n[i+1])
            {
                a++;
            }
        }
        return a;
        
    }
};