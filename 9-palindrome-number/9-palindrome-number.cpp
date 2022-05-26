class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long rev=0;
        while(temp){
            int rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(x<0){
            return false;
        }
        else if(rev==x){
            return true;
        }else{
            return false;
        }
    }
};