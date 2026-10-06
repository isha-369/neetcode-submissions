class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len = pref.length();
        int count=0;
        for(int i=0;i<words.size();i++){
            string word=words[i].substr(0,len);
            if(word==pref){
                count++;
            }
        }
        return count;
    }
};