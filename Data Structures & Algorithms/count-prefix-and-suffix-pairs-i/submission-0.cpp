class Solution {
   public:
    bool isPrefixAndSuffix(string word1, string word2) {
        if (word1.length() > word2.length()) {
            return false;
        }
        int len1 = word1.length();
        int len2 = word2.length();
        int count = 0;
        if (word2.substr(0, len1) == word1) {
            count++;
        }
        if (word2.substr(word2.length() - len1) == word1) {
            count++;
        }
        if (count == 2) return true;
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (i < j) {
                    if (isPrefixAndSuffix(words[i], words[j])) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};