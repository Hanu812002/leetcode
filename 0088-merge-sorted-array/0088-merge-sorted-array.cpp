class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=m+n-1;
        int i=m-1;
        int k=n-1;
        if(m==0){
            for(int i=0;i<n;i++)
                nums1[i]=nums2[i];
            return;
        }
        while(k>=0 && i>=0){
            if(nums1[i]<nums2[k])
            {
                nums1[j]=nums2[k];
                k--;
                j--;
            }
            else if(nums1[i]>=nums2[k]){
                nums1[j]=nums1[i];
                i--;
                j--;
            }
        }
         while(k>=0){
            nums1[j] = nums2[k];
            j--; k--;
        }
    }
};