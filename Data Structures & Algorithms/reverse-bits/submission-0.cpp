class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        for(int i=1;i<=32;i++){
            int bit = n&1;
            if(bit==1){
                res|=(1 << (32-i));
            }
            n=n>>1;
        }
        return res;
    }
};
