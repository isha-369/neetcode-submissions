class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int first=prices[0];
        int second=prices[1];
        int sum = first+second;
        if(money-sum>=0){
            return money-sum;
        }
        return money;
    }
};