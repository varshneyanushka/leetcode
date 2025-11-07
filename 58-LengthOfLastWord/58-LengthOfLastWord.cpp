// Last updated: 07/11/2025, 19:58:55
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ' && ans!=0)
            {
                break;
            }
            else if(s[i]!=' ')
            {
                ans++;
            }
        }
        return ans;
    }
};