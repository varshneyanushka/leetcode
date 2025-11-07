// Last updated: 07/11/2025, 19:56:43
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string merged;
        int maxLength = std::max(word1.length(), word2.length());

        for (int i = 0; i < maxLength; i++) {
            if (i < word1.length()) {
                merged += word1[i];
            }
            
            if (i < word2.length()) {
                merged += word2[i];
            }
        }

        return merged;        
    }
};