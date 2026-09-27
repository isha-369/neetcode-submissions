class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(int i=0;i<strs.size();i++){
            int len = strs[i].length();
            s += (std::to_string(len));
            s += "#";
            s += strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> vec;
        while(i<s.length()){
            int j = i;
            string len = "";
            while(s[j]!='#'){
                len+=s[j];
                j++;
            }
            int leng = std::stoi(len);
            string str = "";
            while(leng){
                j++;
                str += s[j]; 
                leng--;
            }
            j++;
            i=j;
            vec.push_back(str);
        }
        return vec;
    }
};
