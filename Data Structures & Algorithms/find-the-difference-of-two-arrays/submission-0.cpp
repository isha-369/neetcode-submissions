class Solution {
   public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> vec;
        std::unordered_set<int> mp1;
        std::unordered_set<int> mp2;
        for (int i = 0; i < nums1.size(); i++) {
            mp1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            mp2.insert(nums2[i]);
        }
        vector<int> vec2;
        vector<int> vec1;
        for (auto data : mp1) {
            if (mp2.find(data) == mp2.end()) {
                vec1.push_back(data);
            }
        }
        for (auto data : mp2) {
            if (mp1.find(data) == mp1.end()) {
                vec2.push_back(data);
            }
        }

        vec.push_back(vec1);
        vec.push_back(vec2);
        return vec;
    }
};