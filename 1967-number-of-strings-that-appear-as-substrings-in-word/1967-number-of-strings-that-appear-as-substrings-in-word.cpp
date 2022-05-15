class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int result=0;
        for(auto i: patterns){
            if(word.find(i)!=-1){
                result++;
            }
        }
        return result;
    }
};