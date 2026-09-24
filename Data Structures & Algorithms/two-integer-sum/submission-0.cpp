class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            int remaining = target - nums[i];
            if(mp.find(remaining)!=mp.end()){
                vec.push_back(mp[remaining]);
                vec.push_back(i);
                return vec;
            }
            mp[nums[i]]=i;
        }
        return vec;
    }
};
