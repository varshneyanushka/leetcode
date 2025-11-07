// Last updated: 07/11/2025, 19:59:05
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)<haystack.length())
        {
            return haystack.find(needle);
        }
        return -1;
    }
};