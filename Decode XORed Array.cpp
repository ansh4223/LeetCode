class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>res;
        res.push_back(first);
        int n=encoded.size();
        for(int i=0;i<n;i++){
            int x=encoded[i]^res[i];
            res.push_back(x);
        }
        return res;
    }
};