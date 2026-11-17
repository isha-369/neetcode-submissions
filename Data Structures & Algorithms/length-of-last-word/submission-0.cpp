class Solution {
   public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int i=s.length()-1;
        while(s[i]==' ' && i >= 0){
            i--;
        }
        while (s[i] != ' ' && i >= 0) {
            i--;
            len++;
        }
        return len;
    }
};