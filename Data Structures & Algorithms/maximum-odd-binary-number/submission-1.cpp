class Solution {
   public:
    string maximumOddBinaryNumber(string s) {
        int one = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                one++;
            }
        }
        int actual = s.length();
        int zero = actual - one;
        string s1 = "";
        while (one - 1) {
            s1 += '1';
            one--;
        }
        while (zero) {
            s1 += '0';
            zero--;
        }
        if(one){
        s1+='1';

        }
        return s1;
    }
};