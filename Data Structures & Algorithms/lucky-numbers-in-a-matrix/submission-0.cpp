class Solution {
   public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int row = 0, col = 0;
        vector<int> vec;
        while (row < matrix.size()) {
            int small = INT_MAX;
            int large = INT_MIN;
            int col=0;
            for (int i = 0; i < matrix[row].size(); i++) {
                if (matrix[row][i] < small) {
                    small = matrix[row][i];
                    col=i;
                }
            }
            for (int i = 0; i < matrix.size(); i++) {
                if (matrix[i][col] > large) {
                    large = matrix[i][col];
                }
            }
            if (small == large) {
                vec.push_back(small);
            }
            row++;
        }
        return vec;
    }
};
