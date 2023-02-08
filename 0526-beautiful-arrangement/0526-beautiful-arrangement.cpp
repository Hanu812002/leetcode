class Solution {
public:
    int c=0;
    void fun(vector<int>&arr,int i){
        if(i==arr.size())
        {
            c++;
            return;
        }
        
        for(int j=i;j<arr.size();j++){
            
        if((i+1)%arr[j]==0 || arr[j]%(i+1)==0)    
        {   swap(arr[i],arr[j]);
            fun(arr,i+1);
            swap(arr[i],arr[j]);
        }
        }
    }
    int countArrangement(int n) {
       vector<int>v;
        for(int i=0;i<n;i++)
            v.push_back(i+1);
        
        fun(v,0);
        return c;
    }
};