class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int dp = 1;
        int curr = 1;

        for (int i = 1; i < nums.size(); i++) {
            curr++;
            if (nums[i] <= nums[i-1]) curr = 1;
            dp = max(dp, curr);
        }

        return dp;
    }
};