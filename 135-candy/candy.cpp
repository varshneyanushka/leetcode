class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> dp(n,1);
        for(int i=0;i<n-1;i++)
        {
            if(ratings[i]<ratings[i+1])
            {
                dp[i+1]=dp[i]+1;
            }
            else if(ratings[i]>ratings[i+1] && dp[i]<=dp[i+1])
            {
                dp[i]++;
            }
            
            
        }
      
        for(int i=n-1;i>0;i--)
        {
            if(dp[i]==dp[i-1] && ratings[i]!=ratings[i-1])
            {
                dp[i-1]++;
            }
            if(ratings[i-1]>ratings[i] && dp[i-1]<dp[i])
            {
                dp[i-1]=dp[i]+1;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
           
            sum=sum+dp[i];
        }

        return sum;
    }
};