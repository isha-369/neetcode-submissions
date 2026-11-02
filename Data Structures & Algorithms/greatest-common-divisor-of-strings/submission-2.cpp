class Solution {
   public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int l1 = str1.length();
        int l2 = str2.length();
        int gcd = 1;
        for (int i = 2; i <= min(l1, l2); i++) {
            if (l1 % i == 0 && l2 % i == 0) {
                gcd = i;
            }
        }
        string res = "";
        for (int i = 0; i < gcd; i++) {
            res += str1[i];
        }
        return res;
    }
};