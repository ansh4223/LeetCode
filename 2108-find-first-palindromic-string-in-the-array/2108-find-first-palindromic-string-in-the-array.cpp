class Solution {
public:
    bool isPal(string s){
        int l=0,r=s.length()-1;
        while(l<=r){
            if(s[l++]!=s[r--]){
                return false;
            }
            
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string res="";
        for(int i=0;i<words.size();i++){
            if(isPal(words[i])){
                res=words[i];
                break;
            }
        }
        return res;
    }
};