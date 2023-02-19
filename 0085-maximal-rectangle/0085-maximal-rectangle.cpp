class Solution {
public:
    int largestarea(vector<int>&v){
        stack<int>st;
       
        
        int ma=INT_MIN;
        int i=0;
        while(i<v.size()){
            if(st.empty() || v[st.top()]<v[i]){
                st.push(i++);
            }
            else{
                int index=st.top();
                st.pop();
                int area=v[index]*(st.empty()?i:i-st.top()-1);
                ma=max(ma,area);
                
            }
        }
        
        while(!st.empty()){
               int index=st.top();
                st.pop();
                int area=v[index]*(st.empty()?i:i-st.top()-1);
                ma=max(ma,area);
        }
        return ma;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
         vector<int>v;
        for(int i=0;i<matrix[0].size();i++)
            v.push_back(matrix[0][i]-'0');
        
        int row1=largestarea(v);
        
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]=='1')
                {
                    v[j]+=1;
                }
                else
                    v[j]=0;
            }
            row1=max(row1,largestarea(v));
        }
        return row1;
    }
};