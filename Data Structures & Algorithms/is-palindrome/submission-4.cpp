class Solution {
   public:
    bool alphanum(char c) {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (!alphanum(s[i])) {
                i++;
            } else if (!alphanum(s[j])) {
                j--;
            } else {
                char data1 = tolower(s[i]);
                char data2 = tolower(s[j]);
                if (data1 != data2) {
                    return false;
                }
                i++;
                j--;
            }
        }
        return true;
    }
};
