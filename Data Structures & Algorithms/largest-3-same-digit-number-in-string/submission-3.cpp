class Solution {
public:
    string largestGoodInteger(string num) {
        int final= INT_MIN;
        string data="";
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1]&&num[i+1]==num[i+2]){
                string res = num.substr(i,3);
                int n=std::stoi(res);
                if(n>final){
                    final=n;
                    data = res;
                }
            }
        }
        
        return data;
    }
};