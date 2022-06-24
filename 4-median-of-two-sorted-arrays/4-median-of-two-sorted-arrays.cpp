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
//         vector<int> mergedSortedArray(nums1.size()+nums2.size());
    
//     merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),mergedSortedArray.begin());

//     if(mergedSortedArray.size() & 1)
//     {
//         return mergedSortedArray[(mergedSortedArray.size())*0.5];
//     }
//      return ((mergedSortedArray[((mergedSortedArray.size())*0.5)-1] + mergedSortedArray[((mergedSortedArray.size())*0.5)])*0.5);
//   }
    int n=nums1.size();
        int m=nums2.size();
        double m1=-1,m2=-1;
        int i=0,j=0;
        
        for(int c=0;c<=(m+n)/2;c++){
            m2=m1;
            if(i!=n && j!=m){
                m1=(nums1[i]>nums2[j])?nums2[j++]:nums1[i++];
            }
            else if(i<n)
                m1=nums1[i++];
            else 
                m1=nums2[j++];
            
                        // cout<<m1<<"  "<<i<<endl;

        }
        if((m+n)%2==1)
            return m1;
        else 
            return (m1+m2)/2;
    }    
};