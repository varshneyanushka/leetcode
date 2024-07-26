class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        int curr=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            curr+=nums[i];
          
            while(curr>=target)
            {
                ans=min(ans,(i-j+1));
                curr-=nums[j];
                j++; 
            }
        }
        
      
        if(ans==INT_MAX){return 0;}
        return ans;

    }
};