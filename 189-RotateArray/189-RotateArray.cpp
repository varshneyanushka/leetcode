// Last updated: 07/11/2025, 19:58:11
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)
        {
            return;
        }
        while(n<k)
        {
            k=k-n;
            
        }
        
        vector<int> temp={nums.begin()+(n-k),nums.end()};
        temp.insert(temp.end(),nums.begin(),nums.end());
        nums={temp.begin(),temp.end()-k};
        
    }
};