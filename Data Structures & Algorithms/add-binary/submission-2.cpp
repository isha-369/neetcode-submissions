class Solution {
   public:
    string addBinary(string a, string b) {
        int i = a.length() - 1, j = b.length() - 1;
        string s = "";
        int carry=0;
        while (i >= 0 || j >= 0) {
            int val1 = 0;
            int val2 = 0;
            if (i >= 0) {
                val1 = a[i] - '0';
            }
            if (j >= 0) {
                val2 = b[j] - '0';
            }
            int val = val1 ^ val2 ^ carry;
            s += (val + '0');
            if (val1+val2+carry >= 2) {
                carry = 1;
            } else {
                carry = 0;
            }
            i--;
            j--;
        }
        if(carry){
            s+='1';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};