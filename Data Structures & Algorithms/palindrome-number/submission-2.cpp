class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int data=x;
        if(x<0) return false;
        while(x){
            int rem=x%10;
            x=x/10;
            rev=rev*10+rem;
        }
        return rev==data;
    }
};