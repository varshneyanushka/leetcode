// Last updated: 07/11/2025, 19:58:54
class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1){return x;}

        //defining starting range
        int s=0;
        int e=x;
        
        long long int mid;
        
        while(s<e )
        {
             mid= (s+e)/2;
            if(mid*mid>x)
            {
                
                e=mid;
            }
            else if(mid*mid<x)
            {
              s=mid;
            }
            else if(mid*mid==x)
            {
                return mid;
            }
            if(mid*mid<x && (mid+1)*(mid+1)>x)
            {   return mid;
            }
            
        }
        return mid;

    }
};