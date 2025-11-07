// Last updated: 07/11/2025, 19:58:08
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;

        int numIslands = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        set<pair<int, int>> visit;
        
        vector<pair<int, int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == '1' && !visit.count({r, c})) {
                    bfs(r, c, visit, grid, directions);
                    ++numIslands;  // Increment count for each connected component found
                }
            }
        }

        return numIslands;
    }
    
private:
    void bfs(int r, int c, set<pair<int, int>>& visit, vector<vector<char>>& grid, const vector<pair<int, int>>& directions) {
        queue<pair<int, int>> q;
        q.push({r, c});
        visit.insert({r, c});

        while (!q.empty()) {
            auto [row, col] = q.front();
            q.pop();

            for (auto [dr, dc] : directions) {
                int newRow = row + dr;
                int newCol = col + dc;

                if (newRow >= 0 && newRow < grid.size() && newCol >= 0 && newCol < grid[0].size() &&
                    grid[newRow][newCol] == '1' && !visit.count({newRow, newCol})) {
                    
                    q.push({newRow, newCol});
                    visit.insert({newRow, newCol});
                }
            }
        }
    }
};
