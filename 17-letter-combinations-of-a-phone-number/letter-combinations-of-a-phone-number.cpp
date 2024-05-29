class Solution {
    private:
   unordered_map<char, string> map = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}
        };
        vector<string> ans;
public:
     void backtrack(int i, string curr,string d) 
        {
            if (curr.length() == d.length()) 
            {
                ans.push_back(curr);
                return;
            }
            for (char c : map[d[i]]) 
            {
                backtrack(i + 1, curr + c,d);
            }
        }
    vector<string> letterCombinations(string d) 
    {
       if(d.empty()) return {};
        int n=d.length();

        backtrack(0,"",d);
       
        return ans;
        
        
    }
};