class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n){
            int num = n&1;
            if(num){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};
