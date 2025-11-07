// Last updated: 07/11/2025, 19:56:47
class Solution {
public:
    int totalMoney(int n) {
        int x=0;
        int ans=0;
        int temp=0;
        for(int i=1;i<=n;i++)
        {
            if(i%7==1)
            {
                x++;
                temp=x;
            }
            ans+=temp;
            temp++;
        }
        return ans;
    }
};