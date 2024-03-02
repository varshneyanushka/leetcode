class Solution {
public:
    int climbStairs(int n) {
        int prev=1;
        if(n==1)
        {
            return 1;
        }
        int ans=2;
        for(int i=0;i<n-2;i++)
        {
            int temp =ans;
           ans=ans+prev;
           prev=temp;

        }
        return ans;
    }
};