class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0, currEnd=0,nextEnd=0;
        for(int i=0;i<nums.size()-1;i++){
            nextEnd=max(nextEnd,i+nums[i]);
            if(i==currEnd){
                jump++;
                currEnd=nextEnd;
            }
        }
        return jump;
    }
};