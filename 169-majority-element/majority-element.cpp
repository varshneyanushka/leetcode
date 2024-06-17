class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int k=ceil(n/2);
        map<int,int> map;
        for(int i=0;i<n;i++)
        {
           map[nums[i]]++;
        }
        for(auto i=map.begin();i!=map.end();i++)
        {
            if(i->second>k)
            {
                return i->first;
            }
        }
        return 0;
        
    }
};