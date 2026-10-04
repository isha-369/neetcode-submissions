class Solution {
public:
    bool makeEqual(vector<string>& words) {
        std::unordered_map<char,int> mp;
        for(int i=0;i<words.size();i++){
            string word=words[i];
            int j=0;
            while(j<word.length()){
                mp[word[j]]++;
                j++;
            }
        }
        int size=words.size();
        for(auto data:mp){
            if(data.second %size!=0){
                return false;
            }
        }
        return true;
    }
};