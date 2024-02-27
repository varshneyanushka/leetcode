class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        int m = 1;
        for (int i = 1; i <= n; i++) {
            if (m * 2 == i) {
                m = i;
            }
            ans[i] = 1 + ans[i - m];
        }
        return ans;
    }
};
