class Solution {
public:
    void r(vector<char>& s,int i,int j){
        if(i==s.size()/2)
            return;
        swap(s[i],s[j]);
        
        r(s,i+1,j-1);
    }
    void reverseString(vector<char>& s) {
        r(s,0,s.size()-1);
        // return s;
    }
};