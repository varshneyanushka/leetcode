// Last updated: 07/11/2025, 19:57:42
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            swap(s[n-1-i],s[i]);
        }
        
    }
};