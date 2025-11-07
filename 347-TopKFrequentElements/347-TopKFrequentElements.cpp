// Last updated: 07/11/2025, 19:57:39
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        vector<int> s;
        
        for(auto it=map.begin();it!=map.end();it++)
        {
            s.push_back(it->second);
        }
        sort(s.begin(),s.end(),greater<int>());
        int j=0;
        while(j<k)
        {
            for(auto it=map.begin();it!=map.end();it++)
            {
                if(it->second==s[j])
                {
                   ans.push_back(it->first);
                   it->second=-1;
                    j++;
                    break;

                }
                

            }
        
        }
        



        return ans;

    }
};