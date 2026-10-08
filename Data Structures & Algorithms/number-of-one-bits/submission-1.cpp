class Solution {
public:
int count=0;
    int hammingWeight(uint32_t n) {
        int q=0;
        int count=0;
        while(n){
            uint32_t rem=n%2;
            q=n/2;
            n=n/2;
            if(rem){
                count+=(rem);
            }
        }
        return count+q;
    }
};
