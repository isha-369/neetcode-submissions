class Solution {
   public:
    int reverse(int x) {
        int  ans = 0;
        int maximum = INT_MAX/10;
        int minimum = INT_MIN/10;
        while (x) {
            int  rem = x % 10;
            if(ans>maximum || ans<minimum) return 0;
            ans=ans*10+rem;
            x=x/10;
        }
        return ans;
    } 
};
