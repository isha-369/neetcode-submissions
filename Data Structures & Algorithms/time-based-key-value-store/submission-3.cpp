class TimeMap {
   public:
    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {}

    void set(string key, string value, int timestamp) {
        pair<int, string> p;
        p.first = timestamp;
        p.second = value;
        mp[key].push_back(p);
    }

    string get(string key, int timestamp) {
        string res = "";

        if (mp.find(key) != mp.end()) {
            vector<pair<int, string>>& data = mp[key];
            // sort(data.begin(), data.end());
            int i = 0, j = data.size() - 1;
            while (i <= j) {
                int mid = (i + j) / 2;
                pair<int, string> p1 = data[mid];
                if (p1.first <= timestamp) {
                    res = p1.second;
                    i= mid+1;
                } else if (p1.first > timestamp) {
                    j = mid - 1;
                }
            }
        }
        return res;
    }
};
