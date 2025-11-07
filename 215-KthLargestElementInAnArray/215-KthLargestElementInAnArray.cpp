// Last updated: 07/11/2025, 19:58:03
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        for(int i=n-1;i>=0;i--)
        {
            if(k==1)
            {
                return nums[i];
            }
            k--;
        }
        return 0;
    }
};