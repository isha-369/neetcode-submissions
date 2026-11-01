class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        int final = 0;
        int count = 0;

        std::unordered_map<char, int> mp;
        while (i < s.length() && j < s.length()) {
            if (mp.find(s[j]) == mp.end()) {
                count++;
                final = max(count, final);
                mp[s[j]] = 0;
                j++;
            } else if (mp.find(s[j]) != mp.end()) {
                mp.erase(s[i]);

                i++;
                count--;
            }
        }
        return final;
    }
};
