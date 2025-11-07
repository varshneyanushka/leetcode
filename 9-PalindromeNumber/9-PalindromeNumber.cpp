// Last updated: 07/11/2025, 19:59:19
class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
        if(x<0)
        {
            return false;
        }
        long long y=0;
        while(temp!=0)
        {
            
            y=y*10+temp%10;
            temp=temp/10;
            cout<<y<<endl;

        }
        if(x==y)
        {
            return true;
        }
        else return false;
        
    }
};