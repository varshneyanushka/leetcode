// Last updated: 07/11/2025, 19:58:10
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        for(int i=0;i<=31;i++){
        if((n & (1 << i)) !=0)
        cnt++;}
        return cnt;
    }
};