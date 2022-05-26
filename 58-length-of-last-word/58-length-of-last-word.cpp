class Solution {
public:
    int lengthOfLastWord(string s) {
         int len = 0, s_end = s.length() - 1;
        while (s_end >= 0 && s[s_end] == ' '){
           s_end--; 
        } 
        while (s_end >= 0 && s[s_end] != ' ') {
            len++;
            s_end--;
        }
        return len;
    }
};