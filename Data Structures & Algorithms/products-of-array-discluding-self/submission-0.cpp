class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> right(nums.size()+1,1);
        int rightSum = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            rightSum *= nums[i];
            right[i] = rightSum;
        }
        // right[nums.size()]=1;
        int leftSum = 1;
        for (int i = 0; i < nums.size(); i++) {
            // leftSum *= nums[i];
            int val = nums[i];
            nums[i] = leftSum*right[i+1];
            leftSum *= val;
        }
        return nums;
    }
};
