// Last updated: 07/11/2025, 19:57:37
class Solution {
public:
    int getSum(int a, int b) {
        if(a==0)
        {
            return b;
        }
        while(b!=0)
        {
            int temp=(a & b)<<1;
            a=a^b;
            b=temp;
        }
        return a;
    }
};