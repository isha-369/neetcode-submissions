class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1=str1.length();
        int len2=str2.length();
        int ans =0;
        if((str1+str2) != (str2+str1)) return "";
        int mini = min(len1,len2);
        for(int i=1;i<=mini;i++){
            if(len1%i==0 && len2%i==0){
                ans=i;
            }

        }
        // cout<<ans;
        string str = "";
        int j=0;
        while(ans){
            str+=str1[j];
            j++;
            ans--;
        }
        return str;
    }
};