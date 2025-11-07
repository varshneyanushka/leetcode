// Last updated: 07/11/2025, 19:57:04
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        expected=heights;
        sort(expected.begin(),expected.end());
        int not_maching=0;
        for(int i=0;i<heights.size();i++)
        {
            if(expected[i]!=heights[i])
            {
                not_maching++;
            }
        }
        return not_maching;
        
    }
};