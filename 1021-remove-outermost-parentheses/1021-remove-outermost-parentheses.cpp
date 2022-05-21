class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int open_parentheses = 0;
        for (char i : s) {
            if (i == '(' && open_parentheses++ > 0){
                res=res+i;
            }
            if (i == ')' && open_parentheses-- > 1){
                res=res+ i;
            }
        }
        return res;
    }
};