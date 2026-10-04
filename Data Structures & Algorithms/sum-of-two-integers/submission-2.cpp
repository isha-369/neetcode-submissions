class Solution {
   public:
    int getSum(int a, int b) {
        int res = 0;
        int carry = 0;
        int ones = 0;
        for (int i = 0; i < 32; i++) {
            int digit_c = 0;
            int digit_a = a & 1;
            int digit_b = b & 1;
            digit_c = digit_a ^ digit_b ^ carry;
            res = res | (digit_c << i);
            if (digit_a) ones++;
            if (digit_b) ones++;
            if (carry) ones++;
            if (ones >= 2) {
                carry = 1;
            } else {
                carry = 0;
            }
            a = a >> 1;
            b = b >> 1;
            ones=0;
        }
        return res;
        // return (res | (carry << i));
    }
};
