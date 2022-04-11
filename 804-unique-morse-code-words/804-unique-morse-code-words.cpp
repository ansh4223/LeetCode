class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>t;
        for(const string& word: words){
            string t1;
            for(const char c: word){
                t1=t1+v[c-'a'];
            }
            t.insert(t1);
        }
        return t.size();
    }
};