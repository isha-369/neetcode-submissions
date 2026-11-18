class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        int count=0;
        while(n){
            int k=i;
            while(n&&k){
                n--;
                k--;
            }
            if(k==0){
                count++;
            }
            i++;
        }
        return count;
    }
};