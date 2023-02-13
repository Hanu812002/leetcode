class Solution {
public:
    int myAtoi(string s) {
        
            int i = 0, sign = 1, num = 0;
    while (s[i] == ' ') i++;
    if (s[i] == '-') sign = -1, i++;
    else if (s[i] == '+') sign = 1, i++;
    while (s[i] >= '0' && s[i] <= '9') {
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] - '0' > 7)) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return num * sign;

//         bool f=false;
//         long long ans=0;
//         for(int i=0;i<s.length();i++){
//             if(s[i]>='0' && s[i]<='9'){
//                 int m=s[i]-'0';
//                 ans=ans*10+m;
//             }
//             if(s[i]=='-')
//                 f=true;
//         }
        
//         if(f)
//             ans=-(ans);
        
//         return ans;
    }
};