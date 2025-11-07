// Last updated: 07/11/2025, 19:56:55
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool> ans;
        for(int i=0;i<candies.size();i++)
        {
            bool x=false;
            for(int j=0;j<candies.size();j++)
            {
                if(candies[i]+extraCandies>=candies[j])
                {
                    x=true;
                }
                else
                {
                    x=false;
                    break;
                }
               
            }
            ans.push_back(x);
        }
        return ans;
        
    }
};