// Last updated: 07/11/2025, 19:56:42
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n;
        n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};