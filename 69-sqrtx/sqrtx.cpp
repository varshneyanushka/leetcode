class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1){return x;}
        long long int num=1;
       while(num*num<=x)
       {
            num++;
       }
       return num-1;
    }
};