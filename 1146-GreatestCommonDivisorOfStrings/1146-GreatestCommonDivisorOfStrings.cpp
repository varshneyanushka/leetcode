// Last updated: 07/11/2025, 19:57:03
class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        int c=gcd(n,m);
        if(s1+s2 != s2+s1)
        {
            return "";        }
         if(s1.substr(0,c)==s2.substr(0,c))
         {
            return s1.substr(0,c);
         }   
         else{
            return "";
         }
      
    }
     int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};