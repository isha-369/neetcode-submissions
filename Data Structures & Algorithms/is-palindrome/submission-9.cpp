class Solution {
   public:
    bool isalNum(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            while (!isalNum(s[i]) && i < s.length()) {
                i++;
                continue;
            }
            while (!isalNum(s[j]) && j >= 0) {
                j--;
                continue;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            } else {
                i++;
                j--;
            }
        }
        return true;
    }
};
