class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();int m=word2.size();
        if(n==0){return m;}
        if(m==0){return n;}
        vector<vector<int>> dp(m+1, vector<int>(n+1,0));
        for (int i = 0; i <= m; i++) {
    dp[i][n] = m - i;  // Fill the last column
}
for (int i = 0; i <= n; i++) {
    dp[m][i] = n - i;  // Fill the last row
}

        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<dp[i][j];
                if(word2[i]==word1[j])
                {
                    dp[i][j]=dp[i+1][j+1];
                }
                else
                {
                    dp[i][j]=1+min(dp[i+1][j+1],min(dp[i+1][j],dp[i][j+1]));
                }
            }
            cout<<endl;
        }
        return dp[0][0];
    }
};