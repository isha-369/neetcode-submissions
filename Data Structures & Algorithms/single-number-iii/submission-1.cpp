class Solution {
   public:
    vector<int> singleNumber(vector<int>& nums) {
        int num = 0;
        for (int i = 0; i < nums.size(); i++) {
            num ^= nums[i];
        }
        int bit = 1;
        int i = 0;
        while ((bit & num) == 0) {
            bit = 1 << i;
            i++;
        }
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((bit & nums[i]) == 0) {
                a ^= nums[i];
            } else {
                b ^= nums[i];
            }
        }
        return {a, b};
    }
};