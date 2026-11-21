class Solution {
   public:
    void check(vector<vector<char>>& board, int i, int j) {
        if (i < 0 || j < 0 || i >= board.size() || j >= board[i].size() || board[i][j] == 'X' ||
            board[i][j] == '-') {
            return;
        }
        if (board[i][j] == 'O') {
            board[i][j] = '-';
        }
        check(board, i - 1, j);
        check(board, i + 1, j);
        check(board, i, j - 1);
        check(board, i, j + 1);
    }
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (i == 0 || j == 0 || i == board.size() - 1 || j == board[i].size() - 1) {
                    if (board[i][j] == 'O') {
                        check(board, i, j);
                    }
                }
            }
        }
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                } else if (board[i][j] == '-') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};
