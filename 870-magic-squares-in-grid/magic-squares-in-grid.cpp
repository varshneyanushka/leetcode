#include <vector>
#include <set>
#include <iostream>
using namespace std;

class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        for (int i = 0; i <= n - 3; i++) {
            for (int j = 0; j <= m - 3; j++) {
                if (isMagic(grid, i, j)) {
                    ans++;
                }
            }
        }

        return ans;
    }

    bool isMagic(const vector<vector<int>>& grid, int x, int y) {
        // Check distinct numbers from 1 to 9
        set<int> nums;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int val = grid[x + i][y + j];
                if (val < 1 || val > 9 || !nums.insert(val).second) {
                    return false;
                }
            }
        }

        // Check the sum of rows, columns, and diagonals
        int sum = grid[x][y] + grid[x][y + 1] + grid[x][y + 2]; // First row sum

        // Rows
        for (int i = 0; i < 3; i++) {
            if (grid[x + i][y] + grid[x + i][y + 1] + grid[x + i][y + 2] != sum) {
                return false;
            }
        }

        // Columns
        for (int j = 0; j < 3; j++) {
            if (grid[x][y + j] + grid[x + 1][y + j] + grid[x + 2][y + j] != sum) {
                return false;
            }
        }

        // Diagonals
        if (grid[x][y] + grid[x + 1][y + 1] + grid[x + 2][y + 2] != sum) {
            return false;
        }
        if (grid[x][y + 2] + grid[x + 1][y + 1] + grid[x + 2][y] != sum) {
            return false;
        }

        return true;
    }
};
