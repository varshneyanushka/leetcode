// Last updated: 07/11/2025, 19:56:26
class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        int n=s.length();
        for(int i=0;i<n-1;i++)
        {
            ans+=abs(s[i+1]-s[i]);
        }
        return ans;
    }
};