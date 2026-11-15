class Solution {
   public:
    int orangesRotting(vector<vector<int>>& grid) {
        int count = 0;
        std::queue<pair<int, int>> q;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }
        int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!q.empty()) {
            int size = q.size();
            bool rot = false;

            for (int j = 0; j < size; j++) {
                pair<int, int> p = q.front();
                q.pop();
                int r = p.first;
                int c = p.second;
                for (int i = 0; i < 4; i++) {
                    int row = r + d[i][0];
                    int col = c + d[i][1];
                    if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() ||
                        grid[row][col] == 0 || grid[row][col] == 2) {
                        continue;
                    }
                    grid[row][col] = 2;
                    rot = true;
                    q.push({row, col});
                }
            }
            if (rot) count++;
        }
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    return -1;
                }
            }
        }
        return count;
    }
};
