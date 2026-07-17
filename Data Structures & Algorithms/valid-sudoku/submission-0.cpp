class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         // Check rows and columns
    for (int i = 0; i < 9; i++) {

        unordered_set<char> row_set;
        unordered_set<char> col_set;

        for (int j = 0; j < 9; j++) {

            // Row
            if (board[i][j] != '.') {
                if (row_set.contains(board[i][j]))
                    return false;

                row_set.insert(board[i][j]);
            }

            // Column
            if (board[j][i] != '.') {
                if (col_set.contains(board[j][i]))
                    return false;

                col_set.insert(board[j][i]);
            }
        }
    }

    // Check each 3x3 subgrid
    for (int row = 0; row < 9; row += 3) {

        for (int col = 0; col < 9; col += 3) {

            unordered_set<char> box_set;

            for (int i = row; i < row + 3; i++) {

                for (int j = col; j < col + 3; j++) {

                    if (board[i][j] == '.')
                        continue;

                    if (box_set.contains(board[i][j]))
                        return false;

                    box_set.insert(board[i][j]);
                }
            }
        }
    }

    return true;
    }
};
