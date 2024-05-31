class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> a;
        if(n==2)
        {
            return nums;
        }
        for(int i=0;i<n;i++)
        {
            bool flag=false;
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j] && i!=j)
                {
                    flag=true;
                    break;
                }
                
            }
            if (!flag)
            {
                 a.push_back(nums[i]);
            }
            
           

        }
        return a;

        
    }
};