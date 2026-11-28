class Solution {
   public:
    void dfs(unordered_map<int, vector<int>>& mp, vector<bool>& vec, int start,
             unordered_set<int>& s) {
        vec[start] = true;
        for (int i = 0; i < mp[start].size(); i++) {
            if (!vec[mp[start][i]]) {
                dfs(mp, vec, mp[start][i], s);
            }
            s.erase(mp[start][i]);
        }
    }
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> vec(n, false);
        unordered_map<int, vector<int>> mp;
        unordered_set<int> s;
        for (int i = 0; i < edges.size(); i++) {
            mp[edges[i][0]].push_back(edges[i][1]);
        }
        for (int i = 0; i < n; i++) {
            if (!vec[i]) {
                s.insert(i);
                dfs(mp, vec, i, s);
            }
        }
        for (int i = 0; i < n; i++) {
            if (!vec[i]) {
                s.insert(i);
            }
        }
        return vector<int>(s.begin(), s.end());
    }
};
