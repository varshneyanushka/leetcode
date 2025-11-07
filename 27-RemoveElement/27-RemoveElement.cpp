// Last updated: 07/11/2025, 19:59:06
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
           if(nums[i]==val) 
           {
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]!=nums[i])
                {
                    swap(nums[j],nums[i]);
                    break;
                }
            }
           }
        }
        int k=n;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val) {
                k=i;
                break;
            }
        }
      
        return k;
    }
};