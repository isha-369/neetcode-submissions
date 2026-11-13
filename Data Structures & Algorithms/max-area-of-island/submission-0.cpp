class Solution {
   public:
    void island(vector<vector<int>>& grid, int i, int j, int& sum) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == 0) {
            return;
        }
        grid[i][j] = 0;
        sum++;
        island(grid, i + 1, j, sum);
        island(grid, i - 1, j, sum);
        island(grid, i, j - 1, sum);
        island(grid, i, j + 1, sum);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int final = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    int sum = 0;
                    island(grid, i, j, sum);
                    final=max(final,sum);
                }
            }
        }
        return final;
    }
};
