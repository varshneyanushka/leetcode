class Solution {
public:
    vector<vector<int>> ans; 
    vector<int> t;
    void backtrack( int k, int n, int j) {
        if (n == 0 && k == 0) {
            ans.push_back(t);
           
            return;
        }
        if (n < 0 || k < 0) return;

        for (int i = j; i <= 9; i++) {
            t.push_back(i); 
            backtrack( k - 1, n - i, i + 1); 
            t.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        
        backtrack( k, n, 1);
        return ans;
    }
};
