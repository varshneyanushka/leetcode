// Last updated: 07/11/2025, 19:56:22
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int single=0;
        int doub=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=9)
            {
                single+=nums[i];
            }
            else
            {
                doub+=nums[i];
            }
        }
        if(single==doub)
        {
            return false;
        }
        return true;
    }
};