class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();  
        for(int i=0;i<n/2;i++){
            int x=nums[2*i];
            int v=nums[2*i+1];
            while(x--){
                res.push_back(v);
            }
        }
        return res;
    }
};