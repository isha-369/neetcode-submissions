class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        std::unordered_map<char, int> mp;
        for (int i = 0; i < s1.length(); i++) {
            mp[s1[i]]++;
        }
        if (s1.length() > s2.length()) return false;
        int len = s1.length();
        std::unordered_map<char, int> mp1;

        for (int i = 0; i < len; i++) {
            mp1[s2[i]]++;
        }
        if (mp1 == mp) return true;
        for (int i = 1; i <= s2.length() - len; i++) {
            mp1[s2[i - 1]]--;
            if (mp1[s2[i - 1]] == 0) {
                mp1.erase(s2[i - 1]);
            }
            mp1[s2[i + len - 1]]++;
            if (mp1 == mp) return true;
        }
        return false;
    }
};
