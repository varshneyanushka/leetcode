// Last updated: 07/11/2025, 19:57:35
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        int n = s.length();

        // Count the occurrences of each character
        for(int i = 0; i < n; i++) {
            map[s[i]]++;
        }

        // Find the first unique character
        for(int i = 0; i < n; i++) {
            if(map[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};
