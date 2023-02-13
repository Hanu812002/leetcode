class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size(); 
        
        
      double a=0,b=0;
        
    int i=0;
        int j=0;
        for(int x=0;x<=(m+n)/2;x++){
            
            a=b;
            
            if(i!=m && j!=n){
                b=nums1[i]<nums2[j]?nums1[i++]:nums2[j++];
            }
            else if(i<m)
                b=nums1[i++];
            else
                b=nums2[j++];
        }
        
        if((m+n)%2==0){
            return (a+b)/2;
        }
        else
            return b;
    }
};