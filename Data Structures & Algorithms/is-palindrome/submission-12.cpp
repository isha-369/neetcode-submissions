class Solution {
   public:
    bool alNum(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (!alNum(s[i])) {
                i++;
            } else if (!alNum(s[j])) {
                j--;
            } else {
                if (std::tolower(s[i]) != std::tolower(s[j])) {
                    return false;
                } else {
                    i++;
                    j--;
                }
            }
        }
        return true;
    }
};
