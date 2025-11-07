// Last updated: 07/11/2025, 19:59:24
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int j=0;
        int ans=0;
        unordered_set<char> set;
        for(int i=0;i<n;i++)
        {
           while(set.count(s[i]))
           {
             set.erase(s[j]);
             j++;
           }
           set.insert(s[i]);
           ans=max(ans,i-j+1);
        }
        return ans;
    }
};