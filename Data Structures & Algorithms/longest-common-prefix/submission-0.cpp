class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = strs[0];
        int gretest=INT_MAX;
        for (int i = 1; i < strs.size(); i++) {
            string word = strs[i];
            int j=0;
            while(j<word.size() && j<common.size() && word[j]==common[j]){
                j++;
            }
            gretest=min(gretest, j);
        }
        return common.substr(0,gretest);
    }
};