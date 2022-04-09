class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mp;
        for(auto c: allowed){
            mp[c]=1;
        }
        int ans=0;
        for(auto s: words){
            int f=1;
            for(auto c: s){
                if(mp[c]==0){
                    f=0;
                    break;
                }
            }
            if(f==1){
                ans++;
            }
        }
        return ans;
    }
};