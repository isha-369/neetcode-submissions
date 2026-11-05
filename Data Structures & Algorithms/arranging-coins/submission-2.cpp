class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int row=1;
        while(n){
            int i = row;
            while(i && n){
                i--;
                n--;
            }
            if(i==0){
                count++;
            }
            row++;
        }
        return count;
    }
};