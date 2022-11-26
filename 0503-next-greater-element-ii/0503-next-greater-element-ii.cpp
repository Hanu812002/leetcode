class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
          vector<int> temp;
        vector<int> temp2(2*nums.size());
        for(int i=0; i<nums.size(); i++){
            temp.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            temp.push_back(nums[i]);
        }
        stack<int> st;
        for(int i=temp.size()-1; i>=0; i--){
            int k=temp[i];
            while(!st.empty() && st.top()<=k){
                st.pop();
            }
            int nge;
            if(st.empty()){
                nge=-1;
            }
            else{
                nge=st.top();
            }
            temp2[i]=nge;
            st.push(k);
        }
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(temp2[i]);
        }
        return ans;
    
    }
};