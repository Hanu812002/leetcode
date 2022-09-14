class Solution {
public:
     bool search(vector<int>&arr,int target,int d){
        
        int low = 0, high = arr.size() - 1;
        while(low <= high){
            
            int mid = low + (high - low)/2;
            if(abs(arr[mid] - target) <= d){
                return false;
            }
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
            
        }
        return true;
    }
    
    int findTheDistanceValue(vector<int>& A, vector<int>& B, int d) {
        int valid = 0;
        int ans = 0;
        sort(B.begin() , B.end());
        int l =0 ,r = B.size()-1;
        for (int i = 0; i < A.size(); ++i) {
            if (search(B , A[i] , d)) ans++;         
        }
        return ans;
        
    }

};