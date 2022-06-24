class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // int a=nums1.size();
        // int b=nums2.size();
        //  vector<int>v;
        // merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v.begin());
        // a=a+b;
        // if(a%2!=0)
        //     return v[a/2];
        // else
        //     return (v[a/2 -1]+v[a/2])/2;
        vector<int> mergedSortedArray(nums1.size()+nums2.size());
    
    merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),mergedSortedArray.begin());

    if(mergedSortedArray.size() & 1)
    {
        return mergedSortedArray[(mergedSortedArray.size())*0.5];
    }
     return ((mergedSortedArray[((mergedSortedArray.size())*0.5)-1] + mergedSortedArray[((mergedSortedArray.size())*0.5)])*0.5);
  }
    
};