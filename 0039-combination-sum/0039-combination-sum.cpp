class Solution {
public:
      vector<vector<int>>ans;
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    	void fun(vector<int>arr,int i,int n,int sum,vector<int>&v){
	   
	        
	    if(i==n){
	         if(sum==0)
	        ans.push_back(v);
	       return;
	    }
	   // if(sum</
	      
	    if(sum>=arr[i]){
	    v.push_back(arr[i]);
	    fun(arr,i,n,sum-arr[i],v);
	    v.pop_back();
	    }
	    fun(arr,i+1,n,sum,v);
	      
	}

    vector<vector<int>> combinationSum(vector<int>& c, int target) {
     vector<int>v;
        fun(c,0,c.size(),target,v);
        return ans;
    }
};