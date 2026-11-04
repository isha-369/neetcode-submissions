class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<vector<int>, vector<int>> mp;
        for (int i = 0; i < strs.size(); i++) {
            vector<int> vec(26, 0);
            string word = strs[i];
            for (int j = 0; j < word.size(); j++) {
                vec[word[j] - 'a']++;
            }
            mp[vec].push_back(i);
        }
        vector<vector<string>> final;
        for (auto data : mp) {
            vector<int> ans;
            vector<string> res;
            ans = data.second;
            for (int i = 0; i < ans.size(); i++) {
                res.push_back(strs[ans[i]]);
            }
            final.push_back(res);
        }
        return final;
    }
};
