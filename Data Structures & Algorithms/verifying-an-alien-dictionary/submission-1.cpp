class Solution {
   public:
    bool check(string word1, string word2, unordered_map<char, int> mp) {
        int i = 0, j = 0;
        while (i < word1.size() && j < word2.size() && word1[i] == word2[j]) {
            i++;
            j++;
        }
        if (j == word2.size() && i < word1.size()) return false;
        if (mp[word2[j]] < mp[word1[i]]) {
            return false;
        }
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> mp;
        for (int i = 0; i < order.size(); i++) {
            mp[order[i]] = i;
        }
        bool val = true;
        for (int i = 1; i < words.size(); i++) {
            val = val & check(words[i - 1], words[i], mp);
        }
        return val;
    }
};