// Last updated: 07/11/2025, 19:57:52
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int actual=n*(n+1)/2;
        int given=0;
        for(int i=0;i<n;i++)
        {
            given =given+nums[i];
        }
        return actual-given;


        
    }
};