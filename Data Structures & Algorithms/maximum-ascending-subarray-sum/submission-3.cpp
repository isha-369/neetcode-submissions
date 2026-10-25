class Solution {
   public:
    int maxAscendingSum(vector<int>& nums) {
        int final = INT_MIN;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            maxi += nums[i];
            final = max(final, maxi);

            if (i + 1 == nums.size() || nums[i] < nums[i + 1]) {
                // final = max(final, maxi);

            } else {
                maxi = 0;
            }
        }
        return final;
    }
};