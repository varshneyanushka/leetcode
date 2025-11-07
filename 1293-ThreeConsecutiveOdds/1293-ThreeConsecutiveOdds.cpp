// Last updated: 07/11/2025, 19:57:01
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int a=0;
        for(int i=0;i<n;i++)
        {
            if(a==3)
            {
                return true;
            }
            if(arr[i]%2==0)
            {
                a=0;
            }
            else
            {
                a++;
            }
        }
        if(a==3)
            {
                return true;
            }
        return false;
    }
};