class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_set<int> row;
        std::unordered_set<int> col;
        std::unordered_set<int> sq;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == '.') continue;
                if (row.find(board[i][j]) != row.end()) {
                    return false;
                }
                row.insert(board[i][j]);
            }
            row.clear();
            
        }
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[j][i] == '.') continue;
                if (col.find(board[j][i]) != col.end()) {
                    return false;
                }
                col.insert(board[j][i]);
            }
            col.clear();
        }
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                for (int r = i; r < i + 3; r++) {
                    for (int c = j; c < j + 3; c++) {
                        if (board[r][c] == '.') {
                            continue;
                        }
                        if (sq.find(board[r][c]) != sq.end()) {
                            return false;
                        }
                        sq.insert(board[r][c]);
                    }
                }
                sq.clear();
            }
        }
        return true;
    }
};
