// Last updated: 07/11/2025, 19:58:22
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;

        queue<pair<int, int>> q;
        set<pair<int, int>> v;

        int rows = board.size();
        int cols = board[0].size();

        
        for (int i = 0; i < cols; i++) {
            if (board[0][i] == 'O') {
                q.push({0, i});
                v.insert({0, i});
            }
            if (board[rows - 1][i] == 'O') {
                q.push({rows - 1, i});
                v.insert({rows - 1, i});
            }
        }

        
        for (int i = 0; i < rows; i++) {
            if (board[i][0] == 'O') {
                q.push({i, 0});
                v.insert({i, 0});
            }
            if (board[i][cols - 1] == 'O') {
                q.push({i, cols - 1});
                v.insert({i, cols - 1});
            }
        }

        bfs(board, q, v);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] == 'O' && !v.count({i, j})) {
                    board[i][j] = 'X';
                }
            }
        }
    }

private:
    void bfs(vector<vector<char>>& board, queue<pair<int, int>>& q, set<pair<int, int>>& v) {
        vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

        while (!q.empty()) {
            auto [row, col] = q.front();
            q.pop();  // Pop before processing neighbors

            for (auto [dr, dc] : dir) {
                int r = row + dr;
                int c = col + dc;
                if (r >= 0 && r < board.size() && c >= 0 && c < board[0].size() &&
                    board[r][c] == 'O' && !v.count({r, c})) {
                    cout << "Visited: (" << r << ", " << c << ")" << endl;
                    v.insert({r, c});
                    q.push({r, c});
                }
            }
        }
    }
};
