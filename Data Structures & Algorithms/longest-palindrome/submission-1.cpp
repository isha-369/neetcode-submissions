class Solution {
   public:
    int longestPalindrome(string s) {
        std::unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        int count = 0;
        bool flag = false;
        for (auto data : mp) {
            if ((data.second) % 2 == 0) {
                count += data.second;
            } else if ((data.second) % 2 != 0) {
                int val = data.second;
                count = count + (val-1);
                if (!flag) {
                    count++;
                    flag = true;
                }
            }
        }
        return count;
    }
};