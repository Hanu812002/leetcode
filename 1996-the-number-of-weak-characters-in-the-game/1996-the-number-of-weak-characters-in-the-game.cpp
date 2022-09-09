class Solution {
public:
  static  bool sortcol( vector<int>& a,  vector<int>& b)
{
     if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
}
    int numberOfWeakCharacters(vector<vector<int>>& v) {
        
            sort(v.begin(), v.end(),sortcol);
          int c=0;
         int n=v.size();
        int m=-1;
        for(int i=0;i<n;i++){
            
            if(m>v[i][1])
            c++;
            else
            m=v[i][1];
            
        }
       return c;
    }
};