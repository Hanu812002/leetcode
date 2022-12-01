class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
      stack<int>s;
       int i=0;
        int ma=INT_MIN;
        while(i<h.size()){
            if(s.empty() || h[s.top()]<h[i]){
                s.push(i++);
            }
            else{
                int p=s.top();
                s.pop();
                int m=h[p]*(s.empty()?i:i-s.top()-1);
                ma=max(m,ma);
            }
        }
        
        while(!s.empty()){
            int p=s.top();
            s.pop();
            int m=h[p]*(s.empty()?i:i-s.top()-1);
            ma=max(m,ma);
 
        }
        return ma;
    }
};