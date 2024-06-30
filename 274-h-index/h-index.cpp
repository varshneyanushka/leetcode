class Solution {
public:
    int hIndex(vector<int> c) {
        int h=0;
        int n=c.size()+1;
        if(n==1 )
        {
            if(c[0]==0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        vector<int> dp(n,0);
        sort(c.begin(),c.end(),greater<int>());
        for(int d:c)
        {
            for(int i=1;i<n;i++)
        {
            if(d>=i)
            {
                dp[i]++;
            }
        }
        }
        for(int i=1;i<n;i++)
        {
            if(dp[i]>=i)
            {
                h=max(h,i);
            }
        }
        
        
        return h;
    }
};