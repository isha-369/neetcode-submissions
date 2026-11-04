class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<vector<int>, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++) {
            vector<int> vec(26, 0);
            string word = strs[i];
            for (int j = 0; j < word.size(); j++) {
                vec[word[j] - 'a']++;
            }
            mp[vec].push_back(strs[i]);
        }
        vector<vector<string>> final;
        for (auto data : mp) {
            final.push_back(data.second);
            
        }
        return final;
    }
};
