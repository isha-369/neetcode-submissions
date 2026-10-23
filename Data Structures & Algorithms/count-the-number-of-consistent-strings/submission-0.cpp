class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        std::unordered_set<char> s;
        for(int i=0;i<allowed.size();i++){
            s.insert(allowed[i]);
        }
        int count=0;
        for(int i=0;i<words.size();i++){
            string word=words[i];
            int j=0;
            for( j=0;j<word.size();j++){
                if(s.find(word[j])==s.end()){
                    break;
                }
            }
            if(j==word.size()){
                count++;
            }
        }
        return count;
    }
};