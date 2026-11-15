class Solution {
   public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        std::queue<pair<int, int>> q;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 0) {
                    q.push({i, j});
                }
            }
        }
        int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();
            int r = p.first;
            int c = p.second;
            for (int i = 0; i < 4; i++) {
                int row = r + d[i][0];
                int col = c + d[i][1];
                if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() ||
                    grid[row][col] == -1 || grid[row][col] == 0) {
                    continue;
                }
                if (grid[row][col] == 2147483647) {
                    grid[row][col] = 1 + grid[r][c];
                    q.push({row, col});
                }
            }
        }
    }
};
