class Solution {
   public:
    int maxDifference(string s) {
        std::unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        int maxNum = 0;
        int maxodd = INT_MIN;
        int mineven = INT_MAX;
        for (auto i : mp) {
            if (i.second % 2 != 0) {
                if (i.second > maxodd) {
                    maxodd = i.second;
                }
            } else {
                if (i.second < mineven) {
                    mineven = i.second;
                }
            }
            
        }
        return (maxodd-mineven);
    }
};