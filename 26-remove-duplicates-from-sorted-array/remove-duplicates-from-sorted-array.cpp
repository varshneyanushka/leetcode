class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0;
        while (i < nums.size() - 1) {
            if (nums[i] == nums[i + 1]) {
                nums.erase(nums.begin() + i + 1);
            } else {
                i++;
            }
        }

        return nums.size();
    }
};
