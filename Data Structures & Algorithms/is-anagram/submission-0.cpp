class Solution {
   public:
    bool isAnagram(string s, string t) {
        vector<int> vec(26, 0);
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            int index = c - 'a';
            vec[index]++;
        }
        for (int j = 0; j < t.length(); j++) {
            char c = t[j];
            int index = c - 'a';
            vec[index]--;
        }
        for (int i = 0; i < 26; i++) {
            if(vec[i]!=0){
                return false;
            }
        }
        return true;
    }
};
