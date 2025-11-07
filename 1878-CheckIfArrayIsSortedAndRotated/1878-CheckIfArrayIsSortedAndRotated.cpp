// Last updated: 07/11/2025, 19:56:44
class Solution {
public:
    bool check(vector<int>& nums) {
        vector< int> temp=nums;
        sort(temp.begin(),temp.end());
        int n= nums.size();
        bool ans=false;

        for(int i=0;i<n;i++)
        {
            int t=nums[n-1];
            for(int j=n-1;j>0;j--)
            {
                swap(temp[j],temp[j-1]);

            }
            if(temp==nums)
            {
                ans=true;
                break;
            }
        }
        
        return ans;
    }
};