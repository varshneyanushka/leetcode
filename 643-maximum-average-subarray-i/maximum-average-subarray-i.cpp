class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = -1e9; // A very small number to start with
        int n = nums.size();
        int l = 0;
       
        int r = k;
        double curr = 0;
        
        // Calculate the sum of the first k elements
        for(int i = 0; i < k; i++) {
            curr += nums[i];
        } 
        
        ans = curr;
        
        // Slide the window from left to right
        while(r < n) {
            curr -= nums[l];
            l++;
            curr += nums[r];
            r++;
            ans = max(ans, curr);
        }
        
        // Divide the maximum sum found by k to get the average
        ans = ans / k;

        return ans;
    }
};
