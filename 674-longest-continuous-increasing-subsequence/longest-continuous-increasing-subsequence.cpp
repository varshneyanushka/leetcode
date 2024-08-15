class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int m=1;
        int j=1;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            while(j<n && nums[j]>nums[j-1])
            {
                j++;
            }
               m=max(m,j-i);
                j=i+2;
               
            
        }
        return m;
    }
};