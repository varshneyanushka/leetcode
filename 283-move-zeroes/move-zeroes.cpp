class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int zcount=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                ans.push_back(nums[i]);
            }
            else{
                zcount++;
            }
        }
        for(int i=0;i<zcount;i++){
             ans.push_back(0);
        }

        nums=ans;

        
    }
};