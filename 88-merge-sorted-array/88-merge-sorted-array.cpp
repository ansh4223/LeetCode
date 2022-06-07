class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m+n-1;
        m = m-1;
        n = n-1;
        while (m >= 0 && n >= 0) { 
            if (nums1[m] > nums2[n]) {
                nums1[i] = nums1[m];
                m--;
            }
            else{
                nums1[i] = nums2[n];
                n--;
            }
            i--;
        }
        while (m >= 0){
            nums1[i] = nums1[m];
            i--;
            m--;
        } 
        while (n >= 0){
            nums1[i] = nums2[n];
            n--;
            i--;
        }
    }
};