class Solution {
public:

    bool search(vector<vector<char>>& board, string word,
                int i, int j, int index) {

        // If entire word is found
        if (index == word.size())
            return true;

        // Out of bounds
        if (i < 0 || i >= board.size() ||
            j < 0 || j >= board[0].size())
            return false;

        // Character doesn't match
        if (board[i][j] != word[index])
            return false;

        // Mark as visited
        char ch = board[i][j];
        board[i][j] = '#';

        // Check 4 directions
        bool ans =
            search(board, word, i + 1, j, index + 1) ||  // down
            search(board, word, i - 1, j, index + 1) ||  // up
            search(board, word, i, j + 1, index + 1) ||  // right
            search(board, word, i, j - 1, index + 1);    // left

        // Undo / backtrack
        board[i][j] = ch;

        return ans;
    }

    bool exist(vector<vector<char>>& board, string word) {

        for (int i = 0; i < board.size(); i++) {

            for (int j = 0; j < board[0].size(); j++) {

                if (board[i][j] == word[0]) {

                    if (search(board, word, i, j, 0))
                        return true;
                }
            }
        }

        return false;
    }
};