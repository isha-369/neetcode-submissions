class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int i=1;
        while(n){
            int num=i;
            while(num && n){
                num--;
                n--;
            }
            if(num==0 && n>=0){
                count++;
            }
            i++;
        }
        return count;
    }
};