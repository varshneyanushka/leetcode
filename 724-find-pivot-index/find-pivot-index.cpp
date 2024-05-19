class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        // right hand sum =sum -(left hand sum + index val)
        int lsum=0;
        int rsum=sum-nums[0];
        if(lsum==rsum)
            {
                return 0;
            }
        for(int i=1;i<n;i++)
        {
            
            lsum += nums[i-1];
            rsum= sum-nums[i]-lsum;
            if(lsum==rsum)
            {
                return i;
            }

        }
        return -1;


    }
};