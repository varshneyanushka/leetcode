// Last updated: 07/11/2025, 19:57:07
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, INT_MAX);  // Initialize with maximum value
        vector<string> ans;

        for (string w : words) {
            vector<int> charCount(26, 0);
            for (char c : w) {
                charCount[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                minFreq[i] = min(minFreq[i], charCount[i]);
            }
        }

        for (int i = 0; i < 26; ++i) {
            while (minFreq[i] > 0) {
                ans.push_back(string(1, i + 'a'));
                minFreq[i]--;
            }
        }

        return ans;
    }
};
