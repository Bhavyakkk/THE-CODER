class Solution {
public:
    
    bool canplace(int row, int col, vector<string>& board, int n) {
        int ro = row, co = col;

        
        while (ro >= 0 && co >= 0) {
            if (board[ro][co] == 'Q') return false;
            ro--;
            co--;
        }

        
        ro = row; co = col;
        while (ro < n && co >= 0) {
            if (board[ro][co] == 'Q') return false;
            ro++;
            co--;
    }

        
        ro = row; co = col;
        while (co >= 0) {
            if (board[ro][co] == 'Q') return false;
            co--;
        }

        return true;
    }

    
    void solve(int col, vector<vector<string>>& ans, vector<string>& board, int n) {
        if (col == n) {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (canplace(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(col + 1, ans, board, n);
                board[row][col] = '.';  
            }
     }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.')); 
        solve(0, ans, board, n);
        return ans;
}
};