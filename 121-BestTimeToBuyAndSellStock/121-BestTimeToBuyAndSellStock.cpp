// Last updated: 07/11/2025, 19:58:27
#include<limits.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int sell;
        int cur;
        int max=0;
        
        

        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
               
                sell=buy;
                for(int j=i;j<prices.size();j++)
               {
                 if(prices[j]>sell)
                    {
                        sell=prices[j];
                    }
               }
               cur=sell-buy;
            }
            if(cur>max)
            {
                max=cur;
            }
            
        }
        
        
      

        return max;
    }
};