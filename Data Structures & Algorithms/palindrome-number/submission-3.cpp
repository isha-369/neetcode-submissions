class Solution {
public:
int rev(int n){
    int num=0;
    while(n){
        int rem=n%10;
        num=num*10+rem;
        n=n/10;
    }
    return num;
}
    bool isPalindrome(int x) {
        if(x<0) return false;
        int num=rev(x);
        return x==num;
    }
};