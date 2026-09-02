class Solution {
public:

    bool search(vector<vector<char>>& board, string word,
                int i, int j, int index) {

        
        if (index == word.size())
            return true;

        
        if (i < 0 || i >= board.size() ||
            j < 0 || j >= board[0].size())
            return false;

        if (board[i][j] != word[index])
            return false;

        char ch = board[i][j];
        board[i][j] = '#';

        
        bool ans =
            search(board, word, i + 1, j, index + 1) ||  
            search(board, word, i - 1, j, index + 1) || 
            search(board, word, i, j + 1, index + 1) ||  
            search(board, word, i, j - 1, index + 1);    

        
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