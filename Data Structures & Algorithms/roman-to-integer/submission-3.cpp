class Solution {
   public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            switch (s[i]) {
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    sum += 5;
                    break;
                case 'X':
                    sum += 10;
                    break;
                case 'L':
                    sum += 50;
                    break;
                case 'C':
                    sum += 100;
                    break;
                case 'D':
                    sum += 500;
                    break;
                case 'M':
                    sum += 1000;
                    break;
            }
            if (i - 1 >= 0) {
                if (s[i - 1] == 'I' && (s[i] == 'V' || s[i] == 'X')) {
                    sum -= 2;
                }
                if (s[i - 1] == 'X' && (s[i] == 'L' || s[i] == 'C')) {
                    sum -= 20;
                }
                if (s[i - 1] == 'C' && (s[i] == 'D' || s[i] == 'M')) {
                    sum -= 200;
                }
            }
        }
        return sum;
    }
};