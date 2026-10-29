class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1) return "";
        int len1=str1.length();
        int len2=str2.length();
        int val;
        for(int i=1;i<=min(len1,len2);i++){
            if(len1%i==0 && len2%i==0){
                val=i;
            }
        }
        string res="";
        for(int i=0;i<val;i++){
            res+=str1[i];
        }
        return res;
    }
};