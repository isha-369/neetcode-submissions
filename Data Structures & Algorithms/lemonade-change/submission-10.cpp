class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        int twenty=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five++;
            } else if(bills[i]==10){
                ten++;
                if(!five){
                    return false;
                } else {
                    five--;
                }
            } else {
                twenty++;
                int remain = 15;
                if(ten && remain>5){
                    ten--;
                    remain-=10;
                } 
                while(five && remain){
                    remain-=5;
                    five--;
                }
                if(remain) return false;

            }
        }
        return true;
    }
};