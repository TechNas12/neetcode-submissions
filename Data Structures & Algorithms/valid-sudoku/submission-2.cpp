class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                char cur = board[i][j];

                if (cur == '.')
                    continue;

                // Box index: 0 to 8
                int box = (i / 3) * 3 + (j / 3);

                if (rows[i].contains(cur) ||
                    cols[j].contains(cur) ||
                    boxes[box].contains(cur)) {
                    return false;
                }

                rows[i].insert(cur);
                cols[j].insert(cur);
                boxes[box].insert(cur);
            }
        }

        return true;
    }
};