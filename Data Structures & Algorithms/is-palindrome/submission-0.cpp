class Solution {
   public:
    bool isAlphanumeric(char c) {
        if (c >= 'A' && c <= 'Z') {
            return true;
        }
        if (c >= 'a' && c <= 'z') {
            return true;
        }
        if (c >= '0' && c <= '9') {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i <= j) {
            if (isAlphanumeric(s[i]) && isAlphanumeric(s[j])) {
                char c1 = std::tolower(s[i]);
                char c2 = std::tolower(s[j]);
                if (c1 != c2) {
                    return false;
                } else {
                    i++;
                    j--;
                }
            } else {
                if(!isAlphanumeric(s[i])){
                    i++;
                } else {
                    j--;
                }
            }
        }
        return true;
    }
};
