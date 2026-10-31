class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector<int> dp(prices.size(),0);
        int min_so_far=prices[0];
        int max_profit=0;
        // dp[0]=-1;
        for(int i=1;i<prices.size();i++){
            int valid = prices[i]-min_so_far;
            if(prices[i]<min_so_far){
                min_so_far=prices[i];
            }
            if(valid>max_profit){
                max_profit=valid;
            }
        }
        return max_profit;
    }
};
