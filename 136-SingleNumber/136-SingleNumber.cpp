// Last updated: 07/11/2025, 19:58:19

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val=0;
        for(auto i:nums){
            val=val^i;
        }
        return val;
    }
};