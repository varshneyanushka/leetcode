// Last updated: 07/11/2025, 19:57:00
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int> map;
        for(int num :arr)
        {
            
                map[num]++;
            
        }

       unordered_set<int> s;
            for(auto p:map)
            {
                s.insert(p.second);
            }
            if(s.size()!=map.size())
            {
                return false;
            }

        return true;

    }
};