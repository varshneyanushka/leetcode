// Last updated: 07/11/2025, 19:57:17
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n= rooms.size();
        vector<bool> visited(n,false);
        int count=0;
        queue<int>index;
        index.push(0);
        while(!index.empty())
        {
            int key=index.front();
            index.pop();
            if(!visited[key])
            {

                visited[key]=true;
                count++;
                for(int q :rooms[key])
                {
                    index.push(q);
                }

            }
        }
        if(count==n)
        {
            return true;
        }
        
        return false;
    }
};
