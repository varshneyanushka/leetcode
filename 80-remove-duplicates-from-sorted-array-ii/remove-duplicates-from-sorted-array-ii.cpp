class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        int count=1;
        int n=nums.size();
        int k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1] && count==1)
            {
                nums[j]=nums[i];
                j++;
                k++;
                count++;
            }
            else if(nums[i]==nums[i-1] && count>=2)
            {
                count++;
            }
            else if(nums[i]!=nums[i-1])
            {
                nums[j]=nums[i];
                count=1;
                k++;
                j++;
            }
        }
            return k;
    }
};