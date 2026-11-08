class Solution {
   public:
    static bool compare( pair<int,int>& a,  pair<int,int>& b) { return a.first > b.first; }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> p;
        for (auto data : mp) {
            p.push_back({data.second, data.first});
        }
        sort(p.begin(), p.end(), compare);
        vector<int> res;
        int i = 0;
        while (k) {
            res.push_back(p[i].second);
            i++;
            k--;
        }
        return res;
    }
};
