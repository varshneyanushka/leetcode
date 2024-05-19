class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int, int> f;
        for(int num:nums){
            int complement=k-num;
            if(f[complement]>0)
            {
                ans++;
                f[complement]--;
            }
            else
            {
                f[num]++;
            }
        }
        return ans;

    }
};