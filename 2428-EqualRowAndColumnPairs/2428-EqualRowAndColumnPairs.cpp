// Last updated: 07/11/2025, 19:56:35
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        
        
        
        vector<vector<int>> col(n, vector<int>(n));
        
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                col[j][i] = grid[i][j];
            }
        }
        
        int ans = 0;
        
        for (const vector<int> v : grid) {
            for (const vector<int> c : col) {
                if (v == c) {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
