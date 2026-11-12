class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0;
        int tens=0;
        int twenty=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                fives++;
            } else if(bills[i]==10){
                tens++;
                if(fives){
                    fives--;
                } else {
                    return false;
                }
            } else {
                twenty++;
                int remain = 15;
                while(remain>5 && tens){
                    tens--;
                    remain-=10;
                }
                while(remain!=0 && fives){
                    fives--;
                    remain-=5;
                }
                if(remain!=0){
                    return false;
                }
            }
        }
        return true;
    }
};