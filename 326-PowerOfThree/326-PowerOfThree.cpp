// Last updated: 07/11/2025, 19:57:46
class Solution {
public:
    bool isPowerOfThree(int n) {
        float x;
        if(n==0)
        {
            return false;
        }
        x=log(n)/log(3);
        if(pow(3,x)==n)
        {
            return true;
        }
        return false;
        
    }
};