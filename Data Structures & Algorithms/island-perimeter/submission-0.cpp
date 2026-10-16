class Solution {
   public:
    void peri(vector<vector<int>>& grid, int i, int j, int& sum) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == 0 ||
            grid[i][j] == -1) {
            return;
        }
        if (i == 0) sum++;
        if (j == 0) sum++;
        if (i == grid.size() - 1) sum++;
        if (j == grid[0].size() - 1) sum++;
        if (i + 1 < grid.size() && grid[i + 1][j] == 0) sum++;
        if (i - 1 >= 0 && grid[i - 1][j] == 0) sum++;
        if (j + 1 <= grid[0].size()-1 && grid[i][j + 1] == 0) sum++;
        if (j - 1 >= 0 && grid[i][j - 1] == 0) sum++;

        grid[i][j] = -1;
        peri(grid, i + 1, j, sum);
        peri(grid, i - 1, j, sum);
        peri(grid, i, j + 1, sum);
        peri(grid, i, j - 1, sum);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int sum = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    peri(grid, i, j, sum);
                }
            }
        }
        return sum;
    }
};