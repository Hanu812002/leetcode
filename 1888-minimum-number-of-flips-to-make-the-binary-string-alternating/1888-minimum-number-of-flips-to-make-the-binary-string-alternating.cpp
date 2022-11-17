class Solution {
public:
    int minFlips(string s) {
        int n = s.size(), res =INT_MAX, ans1 =0, ans2=0;
        string s1 , s2;
        s = s+s;
		
        for(int i =0;i<s.size();i++)
        {
            s1 += i%2 == 0 ? '0' :'1';   
            s2 += i%2 == 0 ? '1' : '0';  
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(s1[i] != s[i]) ans1++; 
            if(s2[i] != s[i]) ans2++; 
            
            if(i >= n){
               
                if(s1[i-n] != s[i-n]) ans1--;
                if(s2[i-n] != s[i-n]) ans2--;
            }
            if(i >= n-1)
                res = min(res, min(ans1, ans2));
        }
        
        return res;
        
//         int o1=0,o0=0,e1=0,e0=0;

//     for(int i=0;i<s.size();++i){
//      if(i%2!=0 && s[i]=='1')
//            ++o1;
//          if(i%2!=0 && s[i]=='0')
//            ++o0;
//          if(i%2==0 && s[i]=='1')
//            ++e1;
         
//      if(i%2==0 && s[i]=='0')
//            ++e0;
        
//     }
        
//         return min(o1,e1)+min(o0,e0);
    }
};