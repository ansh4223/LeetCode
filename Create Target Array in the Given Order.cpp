class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>target;
        int n=nums.size();
        int i=0;
        while(n--){
            target.insert(target.begin()+index[i],nums[i]);
            i++;
        }
        return target;
    }
};