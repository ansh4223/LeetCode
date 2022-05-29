class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>p;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            p.push(nums[i]);
        }
        for(int i=1;i<k;i++)
            p.pop();
        
        return p.top();
    }
};