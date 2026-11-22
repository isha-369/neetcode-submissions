class Solution {
   public:
    bool areAlmostEqual(string s1, string s2) {
        int i = 0, j = 0;
        int count = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < s1.length(); i++) {
            mp[s1[i]]++;
        }
        for (int j = 0; j < s2.length(); j++) {
            if (mp.find(s2[j]) == mp.end()) {
                return false;
            }
            if (s1[j] != s2[j]) {
                count++;
            }
        }
        return count<=2;
    }
};
