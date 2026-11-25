class Solution {
   public:
    void dfs(vector<bool>& v, unordered_map<int, vector<int>>& mp, int start) {
        v[start] = true;
        for (int i = 0; i < mp[start].size(); i++) {
            if (!v[mp[start][i]]) {
                dfs(v, mp, mp[start][i]);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        int count = 0;
        vector<bool> v(n, false);
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < edges.size(); i++) {
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        for (int i = 0; i < n; i++) {
            if (!v[i]) {
                count++;
                dfs(v, mp, i);
            }
        }
        return count;
    }
};
