// Last updated: 07/11/2025, 19:58:26
class Solution {
public:
    int maxProfit(vector<int> p) {
        int n=p.size();
        int ans=0;
        int b=p[0];
         int curr=0;
        for(int i=1;i<n;i++)
        {
           
            if(p[i-1]>p[i])
            {b=p[i];
            ans+=curr;
            curr=0;
            }
            
            if(b<p[i])
            {
                cout<<curr<<endl;
                curr=max(p[i]-b,curr);
                

            }


            
        }
       ans+=curr;
        return ans;
        
    }
};