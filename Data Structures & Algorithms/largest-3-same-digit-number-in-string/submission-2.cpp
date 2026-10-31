class Solution {
   public:
    string largestGoodInteger(string num) {
        int i = 0;
        int j=0;
        int maxi=INT_MIN;
        string final = "";
        while (i < num.size()) {
            int count=0;
            while(num[i]==num[j] && count<3){
                count++;
                j++;
            }
            if(count==3){
                string s = num.substr(i,j-i);
                if(stoi(s)>maxi){
                    maxi=stoi(s);
                    final=s;
                }
            }
            i=j;
        }
        return final;
    }
};