// Last updated: 07/11/2025, 19:58:05
class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
       unordered_map<char,char> st;
       unordered_map<char,char> ts;
       for(int i=0;i<s.size();i++)
       {
        if ((st.count(s[i]) && st[s[i]] != t[i]) || (ts.count(t[i]) && ts[t[i]] != s[i])) 
            {
                return false;
            }

         st[s[i]]=t[i];
         ts[t[i]]=s[i];
        
       }
       return true;
    }
};