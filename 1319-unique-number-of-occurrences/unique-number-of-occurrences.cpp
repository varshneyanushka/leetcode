class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int> map;
        for(int num :arr)
        {
            if(map[num]==NULL)
            {
                map[num]=1;
            }
            else
            {
                map[num]++;
            }
        }

        for (auto i = map.begin(); i != map.end(); i++) 
        {
            for (auto j = map.begin(); j != map.end(); j++) 
            {
                if( i->second==j->second && i!=j)
                {
                    return false;
                }
            }
        }

        

        return true;

    }
};