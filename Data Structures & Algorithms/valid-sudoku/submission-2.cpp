class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> cols(9);
vector<vector<unordered_set<int>>> squares(3, vector<unordered_set<int>>(3));

        for (int row = 0; row < 9; row++) {
            for (int elem = 0; elem < 9; elem++) {
                char currentElem = board[row][elem];
                if (currentElem == '.') continue;
                if (rows[row].contains(currentElem)) return false;
                rows[row].insert(board[row][elem]);

                if (cols[elem].contains(currentElem)) return false;
                cols[elem].insert(board[row][elem]);

                if (squares[row/3][elem/3].contains(currentElem)) return false;
                squares[floor(row/3)][elem/3].insert(currentElem);
            }
        }

        return true;
    }
};
