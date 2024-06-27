class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size();
       int i=n-1;int j=n-2;
       while(i>=1)
       {
        if(j<0)
        {
            return false;
        }
        // cout<<i<<j<<endl;
        if(nums[j]>=(i-j))
        {
            i--;
            j=i-1;
        }
        else{
            j--;
        }
        
       }
       return true;

    
        
    }
};