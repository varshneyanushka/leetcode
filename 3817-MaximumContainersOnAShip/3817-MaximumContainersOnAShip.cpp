// Last updated: 07/11/2025, 19:56:23
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int deck=n*n;
        int m=deck*w;
        if(m<=maxWeight)
        {
            return deck;
        }
        else
        {
           return maxWeight/w; 
        }
    }
};