class Solution {
public:
    int climbStairs(int n) {
      int one=1;
      int two=1;
      n=n-1;
      while(n--)
      {
          int temp=one;
          one =one +two;
          two=temp;
      }
        return one;
    }

};