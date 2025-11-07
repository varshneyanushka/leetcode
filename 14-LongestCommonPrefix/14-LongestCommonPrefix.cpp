// Last updated: 07/11/2025, 19:59:15
class Solution {
public:
    string longestCommonPrefix(vector<string> s) {
        int n=200;
        string temp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i].length()<n)
            {
                n=s[i].length();
                temp=s[i];
            }
        }
        vector<string> sub;
        for(int i=1;i<=n;i++)
        {
            sub.push_back(temp.substr(0,i));
        }
       
        vector<int> ans;

        for(int i=0;i<s.size();i++){
            int k=0;
            for(string c:sub)
            {
                if(s[i].find(c)==0)
                {
                    k=c.length();                            
                }
            }
            ans.push_back(k);
        }
        sort(ans.begin(),ans.end());
        return temp.substr(0,ans[0]);


        
    }
};