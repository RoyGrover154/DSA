class Solution {
private:
    int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};

    void dfs(int row, int col, vector<vector<int>> &visit, vector<vector<char>> &board) {
        visit[row][col] = 1;

        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                !visit[nrow][ncol] && board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, visit, board);
            }
        }
    }

public:
    void solve(vector<vector<char>> &board) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> visit(n, vector<int>(m, 0));

        // Traverse first and last row
        for (int i = 0; i < m; i++) {
            if (!visit[0][i] && board[0][i] == 'O') {
                dfs(0, i, visit, board);
            }
            if (!visit[n - 1][i] && board[n - 1][i] == 'O') {
                dfs(n - 1, i, visit, board); 
            }
        }

        // Traverse first and last column
        for (int i = 0; i < n; i++) {
            if (!visit[i][0] && board[i][0] == 'O') {
                dfs(i, 0, visit, board);
            }
            if (!visit[i][m - 1] && board[i][m - 1] == 'O') {
                dfs(i, m - 1, visit, board);
            }
        }

        // Convert unvisited 'O' → 'X'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visit[i][j] && board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
    }
};
