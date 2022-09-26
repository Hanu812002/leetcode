class Solution {
public:
    // bool equationsPossible(vector<string>& e) {
//         unordered_map<string,int>m;
//         for(string s : e){
//             string n="";
//             char a=s[0];
//             char b=s[3];
//             if(a>b)
//                 n=n+b+a;
//             else
//                 n=n+a+b;
//             cout<<n<<endl;
//           if(m.find(n)!=m.end()){
//               if(s[1]=='=')
//             {
//                 if(m[n]==0)
//                     return false;
//             }
//              else
//              {
//                  if(m[n]==1)
//                     return false;
//              }
//           }
             
//             if(s[1]=='=')
//                 m[n]=1;
//              else
//                  m[n]=0;
            
//         }
//         return true;
          vector<char>parent;
    char rootfind(char x) {
        return parent[x] == x ? x : rootfind(parent[x]);
    }
public:
    bool equationsPossible(vector<string>& equations) {
       parent.resize(26, 0);
        for (int i = 0; i < 26; i++)
            parent[i] = i;
        for (auto strng: equations) {
            if (strng[1] == '=') {
                char x = rootfind(strng[0]-'a');
                char y = rootfind(strng[3]-'a');
                if (x != y)
                    parent[y] = x;
            }
        }
        for (auto strng: equations) {
            if (strng[1] == '!') {
                int x = rootfind(strng[0]-'a');
                int y = rootfind(strng[3]-'a');
                if (x == y)
                    return false;
            }
        }
        return true;
    }
};