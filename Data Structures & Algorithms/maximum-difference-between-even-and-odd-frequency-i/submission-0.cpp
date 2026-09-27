class Solution {
   public:
    int maxDifference(string s) {
        std::unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        int odd = INT_MIN;
        int even = INT_MAX;
        for (auto it : mp) {
            if (it.second % 2 != 0) {
                if (it.second > odd) {
                    odd = it.second;
                }
            } else {
                if (it.second < even) {
                    even = it.second;
                }
            }
        }
        return (odd-even);
    }
};