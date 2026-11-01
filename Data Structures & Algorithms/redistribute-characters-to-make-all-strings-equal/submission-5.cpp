class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mp;
        for(int i=0;i<words.size();i++){
            string word = words[i];
            for(int j=0;j<word.size();j++){
                mp[word[j]]++;
            }
        }
        int ln=words.size();
        for(auto data:mp){
            if(data.second%ln!=0){
                return false;
            }
        }
        return true;
    }
};