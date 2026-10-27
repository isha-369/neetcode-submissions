class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=0;
        count+=numBottles;
        int empty=numBottles;
        while(empty>=numExchange){
            empty = empty-numExchange;
            count++;
            empty++;
        }
        return count;
    }
};
