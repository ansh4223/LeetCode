class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1,nums2);
        }
        unordered_map<int, int>m;
        for(auto i:nums1){
            m[i]++;
        }
        int k=0;
        for(auto i:nums2){
            if(m[i]>0){
                nums1[k++]=i;
                --m[i];
            }
        }return vector<int>(nums1.begin(),nums1.begin()+k);
    }
};