class Solution {
public:
//     vector<string> findAndReplacePattern(vector<string>& words, string p) {
//         string s="";
//         int c=1;
//         for(int i=1;i<p.length();i++){
//             if(p[i-1]==p[i])
//                 c++;
//             else
//             {
//                 s+=to_string(c);
//                 c=1;
//             }
//         }
//         s+=to_string(c);
//         // cout<<s<<endl;
        
//                 vector<string>v;
//         for(int i=0;i<words.size();i++){
//         string s1="";
//         int c1=1;
//         string n=words[i];
//         for(int j=1;j<n.length();j++){
//             if(n[j-1]==n[j])
//                 c1++;
//             else
//             {
//                 s1+=to_string(c1);
//                 c1=1;
//             }
//         }
//         s1+=to_string(c1);
//         if(s1==s)
//             v.push_back(n);
//         }
//         return v;
//     }
    vector<int> found_Pattern(string pattern)
    {
	   // if string is empty return empty vector.
        if(pattern.size() == 0)
            return {};
        
        vector<int> v;
		
		// ind variable for keeping track of unique characters
        int ind = 0;
		
        unordered_map<char,int> mp;
        for(int i = 0; i<pattern.size(); ++i)
        {
			
           if(mp.find(pattern[i]) == mp.end())
           {
               mp.insert({pattern[i],ind++});
               v.push_back(mp[pattern[i]]);
           }
            else
            {
				// if char is already in map than push index mapped to that character into the vector
                v.push_back(mp[pattern[i]]);
            }
        }
		// return numeric pattern
        return v;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       
		// store numeric patten of Pattern string in v
        vector<int> v = found_Pattern(pattern);
        
        int n = words.size();
        vector<string> ans;
        
		// iterating and comparing pattern of each word with v(numeric pattern of Pattern)
        for(int i = 0; i<n; ++i)
        {
            vector<int> pattern_word = found_Pattern(words[i]);
            
			// if matched add words[i] to answer vector
            if(v == pattern_word)
                ans.push_back(words[i]);
        }
        
        return ans;
    }
};