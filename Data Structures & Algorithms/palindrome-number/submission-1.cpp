class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int data = x;
        int rev=0;
        while(data){
            int rem = data%10;
            rev = rev*10+rem;
            data=data/10;
        }
        return rev==x;
    }
};