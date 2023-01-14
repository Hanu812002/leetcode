class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
//         unordered_map<char,set<char>>mp;
//         for(int i=0;i<s1.size();i++){
//             char a=s1[i];
//             char b=s2[i];
//             mp[a].insert(a);
//             mp[a].insert(b);
//             mp[b].insert(a);
//             mp[b].insert(b);
            
//             if(mp.find(a)!=mp.end())
//             {
//                 mp[a].insert(*mp[a].begin());
//                 mp[b].insert(*mp[a].begin());
//             }
            
//             if(mp.find(b)!=mp.end())
//             {
//                  mp[a].insert(*mp[b].begin());
//                 mp[b].insert(*mp[b].begin());
//             }

//         }
//         string s="";
//         for(int i=0;i<baseStr.size();i++)
//         {
//             // auto j=mp[baseStr[i]];
//             cout<<*mp[baseStr[i]].begin();
//         }
//         return s;
           char ch[26];
        for (int i=0; i<26; i++)
            ch[i] = 'a' + i;

        for (int i=0; i<s1.size(); i++) {
            char toReplace = max(ch[s1[i]-'a'], ch[s2[i]-'a']);
            char replaceWith = min(ch[s1[i]-'a'], ch[s2[i]-'a']);
            for (int i=0; i<26; i++)
                if (ch[i] == toReplace)
                    ch[i] = replaceWith;
        }
        
        for (int i = 0; i<baseStr.size(); i++)
            baseStr[i] = ch[baseStr[i]-'a'];

        return baseStr;
    }
};