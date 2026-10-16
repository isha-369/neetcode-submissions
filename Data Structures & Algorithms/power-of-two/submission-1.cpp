class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        // for(int i=0;i<INT_MAX)
        while(n%2==0){
            // n=n%2;
            n=n/2;
        }
        if(n==1) return true;
        return false;
    }
};