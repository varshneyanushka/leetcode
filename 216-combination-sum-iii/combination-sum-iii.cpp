class Solution {
public:
    vector<vector<int>> ans; // Store the results
    vector<int> t;
    void backtrack( int k, int n, int j) {
        if (n == 0 && k == 0) {
            ans.push_back(t);
           // t.clear(); // Found a valid combination
            return;
        }
        if (n < 0 || k < 0) return; // Not a valid path

        for (int i = j; i <= 9; i++) {
            t.push_back(i); // Choose the current number
            backtrack( k - 1, n - i, i + 1); // Recurse with updated parameters
            t.pop_back(); // Undo the choice
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        
        backtrack( k, n, 1);
        return ans;
    }
};
