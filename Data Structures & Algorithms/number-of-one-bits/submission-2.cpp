class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n){
            int data=n&1;
            if(data)count++;
            n=n>>1;
            // n=n/10;
        }
        return count;
    }
};
