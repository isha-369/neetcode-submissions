class Solution {
   public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0;
        int j = 0;
        while (i < word.size() && j < abbr.size()) {
            while (i < word.size() && j < abbr.size() && word[i] == abbr[j]) {
                j++;
                i++;
            }
            
            string numStr = "";
            while (j < abbr.size() && abbr[j] >= '0' && abbr[j] <= '9') {
                numStr += abbr[j];
                j++;
                if (numStr[0] == '0') {
                    return false;
                }
            }
            if (numStr != "") {
                int num = std::stoi(numStr);
                while (num) {
                    i++;
                    num--;
                }
            }
            if (i < word.size() && j < abbr.size() && word[i] != abbr[j]) {
                return false;
            }
        }
        if (j == abbr.size() && i == word.size()) {
            return true;
        }
        return false;
    }
};