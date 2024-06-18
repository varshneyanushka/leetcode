class Solution {
public:
    int candy(vector<int> a) {
        int n=a.size();
        vector<int> dp(n,1);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                dp[i+1]=dp[i]+1;
            }
            else if(a[i]>a[i+1] && dp[i]<=dp[i+1])
            {
                dp[i]++;
            }
            cout<<dp[i];
            
        }
        cout<<endl;
        for(int i=n-1;i>0;i--)
        {
            if(dp[i]==dp[i-1] && a[i]!=a[i-1])
            {
                dp[i-1]++;
            }
            if(a[i-1]>a[i] && dp[i-1]<dp[i])
            {
                dp[i-1]=dp[i]+1;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cout<<dp[i];
            sum=sum+dp[i];
        }

        return sum;
    }
};