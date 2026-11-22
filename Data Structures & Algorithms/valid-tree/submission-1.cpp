class Solution {
   public:
    bool graph(vector<bool>& visited, unordered_map<int, vector<int>>& mp, int parent, int start) {
        visited[start] = true;
        for (int i = 0; i < mp[start].size(); i++) {
            if (mp[start][i] == parent) continue;
            if (visited[mp[start][i]]) {
                return false;
            }
            graph(visited, mp, start, mp[start][i]);
        }
        return true;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < edges.size(); i++) {
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        bool value;
        vector<bool> visited(n, false);
        value = graph(visited, mp, -1, 0);

        for (int i = 0; i < visited.size(); i++) {
            if (!visited[i]) return false;
        }
        return value;
    }
};
