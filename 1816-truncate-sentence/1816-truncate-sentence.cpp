class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string s1;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                count++;
            }
            if(count<k){
                s1=s1+s[i];
            }else{
                break;
            }
        }
        return s1;
    }
};