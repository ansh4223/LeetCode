class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN,cursum=0;
        for(int i=0;i<nums.size();i++){
            cursum=cursum+nums[i];
            if(maxsum<cursum){
                maxsum=cursum;
            }
            if(cursum<0){
                cursum=0;
            }
        }return maxsum;
    }
};