class Solution {
public:
    bool isSubsequence(string t, string s) {
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==t[j])
            {
                j++;
            }
        }
        
        if(j==t.length())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};