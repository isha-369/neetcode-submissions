class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                one++;
            }
        }
        int zero=s.length()-one;
        int left = one-1;
        string res="";
        while(left){
            res+='1';
            left--;
        }
        while(zero){
            res+='0';
            zero--;
        }
        res+='1';
        return res;
    }
};