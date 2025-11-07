// Last updated: 07/11/2025, 19:56:59
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>> ans(2);
        int n=nums1.size();
        int m=nums2.size();
        for(int r:nums1)
        {
            bool flag=false;
            for(int w:nums2)
            {
                if(r==w)
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)
            {
                ans[0].push_back(r);
            }
        }

        for(int r:nums2)
        {
            bool flag=false;
            for(int w:nums1)
            {
                if(r==w)
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)
            {
                ans[1].push_back(r);
            }
        }
        sort(ans[0].begin(), ans[0].end());   
        auto last = unique(ans[0].begin(), ans[0].end());  
        ans[0].erase(last, ans[0].end());  

        sort(ans[1].begin(), ans[1].end());   
        auto las = unique(ans[1].begin(), ans[1].end());  
        ans[1].erase(las, ans[1].end());  
    

        return ans;
        
    }
};