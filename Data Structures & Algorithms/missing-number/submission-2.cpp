class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // vector<int> vec(nums.size()+1,0);
        int data=0;
        for(int i=0;i<nums.size();i++){
            data=data^nums[i];
                }
        int val = nums.size();
        int data1=0;
        for(int i=0;i<=val;i++){
            data1=data1^i;
            
        }
        return data^data1;
    }
};
