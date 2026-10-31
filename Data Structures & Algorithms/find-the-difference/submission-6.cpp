class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0;i<t.length();i++){
            mp[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
            }
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
        }
        return mp.begin()->first;
    }
};