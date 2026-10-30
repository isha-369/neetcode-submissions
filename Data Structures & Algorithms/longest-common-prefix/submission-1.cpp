class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for (int i = 0; i < strs.size() - 1; i++) {
            string word1 = res;
            string word2 = strs[i + 1];
            int j = 0, k = 0;
            while (j < word1.size() && k < word2.size() && word1[j] == word2[k]) {
                j++;
                k++;
            }
            if (j > 0) {
                res = word1.substr(0, j);
                word1 = res;
            } else {
                res = "";
            }
        }
        return res;
    }
};